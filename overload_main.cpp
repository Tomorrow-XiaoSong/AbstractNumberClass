#include<iostream>
#include"overload.h"
using namespace std;
int main()
{
	cout << "complex number 3+4i and 5+6i\n";
	ComplexOverload num1(3, 4), num2(5, 6), num3;
	num3 = num1 + num2;
	cout << "+ :";
	num3.print();
	num3 = num1 * num2;
	cout << "* :";
	num3.print();
	
	return 0;
}
