#ifndef OVERLOAD_H
#define OVERLOAD_H
#include<iostream>
using namespace std;
class ComplexOverload
{
private:
	double r, i;
	ComplexOverload* C_result;
public:
	
	ComplexOverload(double num1 = 0, double num2 = 0) {
		r = num1;
		i = num2;
	}
	ComplexOverload operator +(const ComplexOverload& other) {
		C_result = new ComplexOverload;
		C_result->r = r + other.r;
		C_result->i = i + other.i;
		return *C_result;
	}
	ComplexOverload operator *(const ComplexOverload& other) {
		C_result = new ComplexOverload;
		C_result->r = r * other.r - i * other.i;
		C_result->i = r * other.i + i * other.r;
		return *C_result;
	}
	void print() {
		cout << "This complex number is:" << this->r;
		if (this->i != 0)cout << '+' << this->i << 'i';
		cout << endl;
	}
	~ComplexOverload() {
		delete C_result;
	}
};


#endif
