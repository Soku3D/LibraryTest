#pragma once

namespace Son {
	double TestAddFunction(double a, double b);

	class TestClass {
	public:
		TestClass(int a);

		static int ReturnVal(int a);
	private:
		int ClassVal = 3;
	};
}