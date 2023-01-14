#pragma once

namespace Son {
	static double TestAddFunction(double a, double b);

	class TestClass {
	public:
		TestClass(int a);

		static int ReturnVal(int a);
	private:
		int ClassVal = 3;
	};
}