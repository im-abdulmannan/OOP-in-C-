#include <iostream>
#include <conio.h>

using namespace std;

class mdt {
	public: int num1;
	public: int num2;
	public: char opt;
	public: int r;
};

int main () {
	mdt y;
	
	cout << "Enter 1st Integer: ";
	cin >> y.num1;
	
	cout << "Enter 2nd Integer: ";
	cin >> y.num2;
	
	cout << "Enter Operation: ";
	cin >> y.opt;
	
	if ( y.opt == '+' ) {
		y.r = y.num1 + y.num2;
	} 
	if ( y.opt == '-' ) {
		y.r = y.num1 - y.num2;
	}
	if ( y.opt == '*' ) {
		y.r = y.num1 * y.num2;
	}
	if ( y.opt == '/' ) {
		y.r = y.num1 / y.num2;
	}
	
	cout << "Result = " << y.r;
	
	return 0;	
}
