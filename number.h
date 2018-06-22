#ifndef NUMBER_H
#define NUMBER_H
#include<iostream>
using namespace std;
class Number
{
public:
	virtual void print() {};
	Number add(const Number& other) { return *this; }
	Number mul(const Number& other) { return *this; }
};

class RealNumber :public Number
{
private:
	double R_number;
public:
	RealNumber* R_result;
	RealNumber(double num = 0) {
		this->R_number = num;
	}
	RealNumber add(const RealNumber& other){
		R_result = new RealNumber;
		R_result->R_number = this->R_number + other.R_number;
		return *R_result;
	}
	RealNumber mul(const RealNumber& other) {
		R_result = new RealNumber;
		R_result->R_number = this-> R_number * other.R_number;
		return *R_result;
	}
	void print() {
		cout << "This realnumber is:" << this->R_number << endl;
	}
	~RealNumber() {
		delete R_result;
	}
};
class IntegerNumber : public RealNumber
{
private:
	int I_number;
public:
	IntegerNumber* I_result;
	IntegerNumber(int num = 0) {
		I_number = num;
	}

	IntegerNumber add(const IntegerNumber& other) {
		I_result = new IntegerNumber;
		I_result->I_number = this->I_number + other.I_number;
		return *I_result;
	}
	IntegerNumber mul(const IntegerNumber& other) {
		I_result = new IntegerNumber;
		I_result->I_number = this->I_number * other.I_number;
		return *I_result;
	}
	void print() {
		cout << "This integer number is:" << (int)this->I_number << endl;
	}
	~IntegerNumber() {
		delete I_result;
	}
};
class ComplexNumber :public Number
{
private:
	double r;
	double i;
public:
	ComplexNumber(double num1 = 0, double num2 = 0) {
		r = num1;
		i = num2;
	}
	ComplexNumber* C_result;
	ComplexNumber add(const ComplexNumber& other) {
		C_result = new ComplexNumber;
		C_result->r = this->r + other.r;
		C_result->i = this->i + other.i;
		return *C_result;
	}
	ComplexNumber mul(const ComplexNumber& other) {

		C_result = new ComplexNumber;
		C_result->r = this->r * other.r - this->i * other.i;
		C_result->i = this->r * other.i + this->i * other.r;
		return *C_result;
	}
	void print() {
		cout << "This complex number is:" << this->r;
		if (this->i != 0)cout << '+' << this->i << 'i';
		cout << endl;
	}
	~ComplexNumber() {
		delete C_result;
	}
};

#endif
