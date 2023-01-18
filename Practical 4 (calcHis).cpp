#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class calc {
	public: int num1;
	public: int num2;
	public: char opt;
	public: int r;
};


int main () {
	
//	Memory
	int calcHis[5];
	for ( int i = 0; i < 5; i++ ) {
	
		calc y;
	
//		Data Inputs
		cout << "Enter 1st Integer: ";
		cin >> y.num1;
	
		cout << "Enter 2nd Integer: ";
		cin >> y.num2;
	
		cout << "Enter Operation: ";
		cin >> y.opt;
	
//		Calculations
		switch (y.opt) {
			case '+':
				y.r = y.num1 + y.num2;
				break;
	
			case '-':
				y.r = y.num1 - y.num2;
				break;
		
			case '*':
				y.r = y.num1 * y.num2;
				break;
			
			case '/':
				y.r = y.num1 / y.num2;
				break;
		
			default:
				cout << "Selected Operator will be ( +, -, *, / )" << endl;
				break;
		}
	
//	Result
	cout << "Result = " << y.r << "\t";
	
	cout << calcHis << endl << endl;
	}
	
	return 0;
}
