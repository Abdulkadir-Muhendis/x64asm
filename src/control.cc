/*
Copyright 2103 eric schkufza

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "src/control.h"

#include "src/op_set.h"

#include <cassert>

using namespace std;

namespace x64asm {

OpType Control::type() const {
	return OpType::CONTROL;
}

bool Control::check() const {
	return val() < 13 && val() != 6 && val() != 7 && val() != 8 && val() != 10;
}

void Control::insert_in(OpSet& os, bool promote) const {
	os += *this;
}

void Control::write_att(ostream& os) const {
	os << "%";
	write_intel(os);
}

void Control::write_intel(ostream& os) const {
	switch ( val() ) {
		case 0: os << "im"; break;
		case 1: os << "dm"; break;
		case 2: os << "zm"; break;
		case 3: os << "om"; break;
		case 4: os << "um"; break;
		case 5: os << "pm"; break;
		case 9: os << "pc"; break;
		case 11: os << "rc"; break;
		case 12: os << "x"; break;

		default: assert(false);
	}
}

} // namespace x64asm
