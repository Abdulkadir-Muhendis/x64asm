#include "src/code/constants.h"

using namespace std;

namespace x64 {

const Cr0234 cr0{Constants::cr0()};
const Cr0234 cr2{Constants::cr2()};
const Cr0234 cr3{Constants::cr3()};
const Cr0234 cr4{Constants::cr4()};

const vector<Cr0234> cr0234s {{
	cr0, cr2, cr3, cr4
}};

const Cr8 cr8{Constants::cr8()};

const vector<Cr> crs {{
	cr0, cr2, cr3, cr4, cr8
}};

const Dr dr0{Constants::dr0()};
const Dr dr1{Constants::dr1()};
const Dr dr2{Constants::dr2()};
const Dr dr3{Constants::dr3()};
const Dr dr4{Constants::dr4()};
const Dr dr5{Constants::dr5()};
const Dr dr6{Constants::dr6()};
const Dr dr7{Constants::dr7()};

const vector<Dr> drs {{
	dr0, dr1, dr2, dr3, dr4, dr5, dr6, dr7
}};

const Eflag cf{Constants::cf()};
const Eflag pf{Constants::pf()};
const Eflag af{Constants::af()};
const Eflag zf{Constants::zf()};
const Eflag sf{Constants::sf()};
const Eflag tf{Constants::tf()};
const Eflag if_{Constants::if_()};
const Eflag df{Constants::df()};
const Eflag of{Constants::of()};
const Eflag iopl0{Constants::iopl0()};
const Eflag iopl1{Constants::iopl1()};
const Eflag nt{Constants::nt()};
const Eflag rf{Constants::rf()};
const Eflag vm{Constants::vm()};
const Eflag ac{Constants::ac()};
const Eflag vif{Constants::vif()};
const Eflag vip{Constants::vip()};
const Eflag id{Constants::id()};

const vector<Eflag> eflags {{
	cf,    pf,    af, zf, sf, tf, if_, df,  of, 
	iopl0, iopl1, nt, rf, vm, ac, vif, vip, id
}};

const Zero zero{Constants::zero()};
const One one{Constants::one()};
const Three three{Constants::three()};

const Mm mm0{Constants::mm0()};
const Mm mm1{Constants::mm1()};
const Mm mm2{Constants::mm2()};
const Mm mm3{Constants::mm3()};
const Mm mm4{Constants::mm4()};
const Mm mm5{Constants::mm5()};
const Mm mm6{Constants::mm6()};
const Mm mm7{Constants::mm7()};

const vector<Mm> mms {{
	mm0, mm1, mm2, mm3, mm4, mm5, mm6, mm7
}};

const Pref66 pref_66{Constants::pref_66()};
const PrefRexW pref_rex_w{Constants::pref_rex_w()};
const Far far{Constants::far()};

const Al al{Constants::al()};
const Cl cl{Constants::cl()};
const Rl dl{Constants::dl()};
const Rl bl{Constants::bl()};

const vector<Rl> rls {{
	al, cl, dl, bl
}};

const Rh ah{Constants::ah()};
const Rh ch{Constants::ch()};
const Rh dh{Constants::dh()};
const Rh bh{Constants::bh()};

const vector<Rh> rhs {{
	ah, ch, dh, bh
}};

const Rb spl{Constants::spl()};
const Rb bpl{Constants::bpl()};
const Rb sil{Constants::sil()};
const Rb dil{Constants::dil()};
const Rb r8b{Constants::r8b()};
const Rb r9b{Constants::r9b()};
const Rb r10b{Constants::r10b()};
const Rb r11b{Constants::r11b()};
const Rb r12b{Constants::r12b()};
const Rb r13b{Constants::r13b()};
const Rb r14b{Constants::r14b()};
const Rb r15b{Constants::r15b()};

const vector<Rb> rbs {{
	spl, bpl, sil, dil, r8b, r9b, r10b, r11b, r12b, r13b, r14b, r15b
}};

const Ax ax{Constants::ax()};
const R16 cx{Constants::cx()};
const Dx dx{Constants::dx()};
const R16 bx{Constants::bx()};
const R16 sp{Constants::sp()};
const R16 bp{Constants::bp()};
const R16 si{Constants::si()};
const R16 di{Constants::di()};
const R16 r8w{Constants::r8w()};
const R16 r9w{Constants::r9w()};
const R16 r10w{Constants::r10w()};
const R16 r11w{Constants::r11w()};
const R16 r12w{Constants::r12w()};
const R16 r13w{Constants::r13w()};
const R16 r14w{Constants::r14w()};
const R16 r15w{Constants::r15w()};

const vector<R16> r16s {{
	ax,  cx,  dx,   bx,   sp,   bp,   si,   di,
	r8w, r9w, r10w, r11w, r12w, r13w, r14w, r15w
}};

const Eax eax{Constants::eax()};
const R32 ecx{Constants::ecx()};
const R32 edx{Constants::edx()};
const R32 ebx{Constants::eax()};
const R32 esp{Constants::esp()};
const R32 ebp{Constants::ebp()};
const R32 esi{Constants::esi()};
const R32 edi{Constants::edi()};
const R32 r8d{Constants::r8d()};
const R32 r9d{Constants::r9d()};
const R32 r10d{Constants::r10d()};
const R32 r11d{Constants::r11d()};
const R32 r12d{Constants::r12d()};
const R32 r13d{Constants::r13d()};
const R32 r14d{Constants::r14d()};
const R32 r15d{Constants::r15d()};

const vector<R32> r32s {{
	eax, ecx, edx,  ebx,  esp,  ebp,  esi,  edi, 
	r8d, r9d, r10d, r11d, r12d, r13d, r14d, r15d
}};

const Rax rax{Constants::rax()};
const R64 rcx{Constants::rcx()};
const R64 rdx{Constants::rdx()};
const R64 rbx{Constants::rbx()};
const R64 rsp{Constants::rsp()};
const R64 rbp{Constants::rbp()};
const R64 rsi{Constants::rsi()};
const R64 rdi{Constants::rdi()};
const R64 r8{Constants::r8()};
const R64 r9{Constants::r9()};
const R64 r10{Constants::r10()};
const R64 r11{Constants::r11()};
const R64 r12{Constants::r12()};
const R64 r13{Constants::r13()};
const R64 r14{Constants::r14()};
const R64 r15{Constants::r15()};

const vector<R64> r64s {{
	rax, rcx, rdx, rbx, rsp, rbp, rsi, rdi,
	r8,  r9,  r10, r11, r12, r13, r14, r15
}};

const Sreg es{Constants::es()};
const Sreg cs{Constants::cs()};
const Sreg ss{Constants::ss()};
const Sreg ds{Constants::ds()};
const Fs fs{Constants::fs()};
const Gs gs{Constants::gs()};

const vector<Sreg> sregs {{
	es, cs, ss, ds, fs, gs
}};

const St0 st0{Constants::st0()};
const St st1{Constants::st1()};
const St st2{Constants::st2()};
const St st3{Constants::st3()};
const St st4{Constants::st4()};
const St st5{Constants::st5()};
const St st6{Constants::st6()};
const St st7{Constants::st7()};

const vector<St> sts {{
	st0, st1, st2, st3, st4, st5, st6, st7
}};

const Xmm0 xmm0{Constants::xmm0()};
const Xmm xmm1{Constants::xmm1()};
const Xmm xmm2{Constants::xmm2()};
const Xmm xmm3{Constants::xmm3()};
const Xmm xmm4{Constants::xmm4()};
const Xmm xmm5{Constants::xmm5()};
const Xmm xmm6{Constants::xmm6()};
const Xmm xmm7{Constants::xmm7()};
const Xmm xmm8{Constants::xmm8()};
const Xmm xmm9{Constants::xmm9()};
const Xmm xmm10{Constants::xmm10()};
const Xmm xmm11{Constants::xmm11()};
const Xmm xmm12{Constants::xmm12()};
const Xmm xmm13{Constants::xmm13()};
const Xmm xmm14{Constants::xmm14()};
const Xmm xmm15{Constants::xmm15()};

const vector<Xmm> xmms {{
	xmm0, xmm1, xmm2,  xmm3,  xmm4,  xmm5,  xmm6,  xmm7,
	xmm8, xmm9, xmm10, xmm11, xmm12, xmm13, xmm14, xmm15
}};

const Ymm ymm0{Constants::ymm0()};
const Ymm ymm1{Constants::ymm1()};
const Ymm ymm2{Constants::ymm2()};
const Ymm ymm3{Constants::ymm3()};
const Ymm ymm4{Constants::ymm4()};
const Ymm ymm5{Constants::ymm5()};
const Ymm ymm6{Constants::ymm6()};
const Ymm ymm7{Constants::ymm7()};
const Ymm ymm8{Constants::ymm8()};
const Ymm ymm9{Constants::ymm9()};
const Ymm ymm10{Constants::ymm10()};
const Ymm ymm11{Constants::ymm11()};
const Ymm ymm12{Constants::ymm12()};
const Ymm ymm13{Constants::ymm13()};
const Ymm ymm14{Constants::ymm14()};
const Ymm ymm15{Constants::ymm15()};

const vector<Ymm> ymms {{
	ymm0, ymm1, ymm2,  ymm3,  ymm4,  ymm5,  ymm6,  ymm7,
	ymm8, ymm9, ymm10, ymm11, ymm12, ymm13, ymm14, ymm15
}};

} // namespace x64