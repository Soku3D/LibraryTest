
#include "Test.h"
#include <iostream>
#include "MathLibrary.h"
using namespace std;


using Son::TestClass;
int main()
{
	int a;
	cin >> a;
	TestClass TC(3);
	cout << TC.ReturnVal(a) << std::endl;
	cout << Son::TestAddFunction(3, 4) << std::endl;
	
	fibonacci_init(1, 1);
	std::cout << fibonacci_index() << ": "
		<< fibonacci_current() << std::endl;

	int b;
	cin >> b;

	return 0;
}