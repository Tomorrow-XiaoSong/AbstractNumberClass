#include<iostream>
#include"number.h"

int main()
{
	//RealNumber test
	cout << "RealNumber 2.22 and 3\n";
	RealNumber R_num1(2.22), R_num2(3), R_num3;
	R_num3 = R_num1.add(R_num2);
	cout << "RealNumber Add:";
	R_num3.print();
	R_num3 = R_num1.mul(R_num2);
	cout << "RealNumber Mul:";
	R_num3.print();

	//IntegerNumber test
	cout << "\nIntegerNumber 2 and 3\n";
	IntegerNumber I_num1(2), I_num2(3), I_num3;
	I_num3 = I_num1.add(I_num2);
	cout << "IntegerNumber Add:";
	I_num3.print();
	I_num3 = I_num1.mul(I_num2);
	cout << "IntegerNumber Mul:";
	I_num3.print();

	//ComplexNumber test
	cout << "\nComplexNumber 3+6i and -4+8i\n";
	ComplexNumber C_num1(3,6), C_num2(-4,8), C_num3;
	C_num3 = C_num1.add(C_num2);
	cout << "ComplexNumber Add:";
	C_num3.print();
	C_num3 = C_num1.mul(C_num2);
	cout << "ComplexNumber  Mul:";
	C_num3.print();

	return 0;
}
