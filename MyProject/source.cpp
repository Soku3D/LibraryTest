
#include "Test.h"
#include <iostream>
using namespace std;


using Son::TestClass;
int main()
{
	while (true)
	{
		int a;
		cin >> a;
		TestClass TC(3);
		cout << TC.ReturnVal(a) << std::endl;
		cout << Son::TestAddFunction(3, 4) << std::endl;
	}
	
	return 0;
}