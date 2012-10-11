#include "src/code/instruction.h"

using namespace std;

namespace x64 {

bool Instruction::is_null() const {
	if ( get_opcode().is_null() )
		return true;
	for ( size_t i = 0, ie = arity(); i < ie; ++i )
		switch ( type(i) ) {
			case ADDR:     if ( Addr(operands_[i]).is_null() ) return true;
										 break;
			case ST0_ONLY:
			case FP_REG:   if ( FpReg(operands_[i]).is_null() ) return true;
										 break;
			case RAX_ONLY:
			case RCX_ONLY:
			case GP_REG:   if ( GpReg(operands_[i]).is_null() ) return true;
									   break;
			case IMM:      if ( Imm(operands_[i]).is_null() ) return true;
										 break;
			case LABEL:    if ( Label(operands_[i]).is_null() ) return true;
										 break;
			case MMX_REG:  if ( MmxReg(operands_[i]).is_null() ) return true;
										 break;
			case XMM_REG:  if ( XmmReg(operands_[i]).is_null() ) return true;
										 break;
			default:
				assert(false);
		}
	return false;
}

RegSet Instruction::explicit_read_set() const {
	RegSet rs;
	for ( size_t i = opcode_.first_read(), ie = arity(); i < ie; ++i )
		switch ( type(i) ) {
			case RAX_ONLY:
			case RCX_ONLY:
			case GP_REG: { 
					const auto gp = get_gp_reg(i); 
					if ( !gp.is_null() ) 
						rs.set_gp(gp, width(i)); 
				} 
				break;
			case XMM_REG: 
				rs.set_xmm(get_xmm_reg(i)); 
				break;						 
			case ADDR: { 
					const auto a = get_addr(i); 
					const auto w = a.get_reg_width();
					const auto b = a.get_base();
					const auto idx = a.get_index();
					if ( !b.is_null() )
						rs.set_gp(b, w);
					if ( !idx.is_null() )
						rs.set_gp(idx, w);
				}
			default: 
				break;
		}

	return rs;
}

RegSet Instruction::explicit_write_set() const {
	RegSet rs;
	for ( size_t i = 0, ie = opcode_.num_writes(); i < ie; ++i ) {
		const auto t = type(i);
		if ( t == GP_REG ) {
			const auto gp = get_gp_reg(i);
			const auto w = width(i);
			assert(!gp.is_null());
			rs.set_gp(gp, w == DOUBLE ? QUAD : w);
		}
		else {
			assert(t == XMM_REG);
			rs.set_xmm(get_xmm_reg(i));
		}
	}

	return rs;
}

} // namespace x64
