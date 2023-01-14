
#include "Test.h"

namespace Son {
	TestClass::TestClass(int a)
		: ClassVal(a) {

	}
	int TestClass::ReturnVal(int a) {
		return a * a;
	}

	double TestAddFunction(double a, double b) {
		return a + b;
	}
}