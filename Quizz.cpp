#include <iostream>
using namespace std;

int Add(int a, int b) {
	cout << "\nEnter 1st Number: ";
	cin >> a;
	cout << "Enter 2nd Number: ";
	cin >> b;
	
	cout << "Addition = " << a + b << endl << endl;
}

int Sub(int a, int b) {
	cout << "\nEnter 1st Number: ";
	cin >> a;
	cout << "Enter 2nd Number: ";
	cin >> b;
	
	cout << "Subtraction = " << a - b << endl << endl;
}

int main () {
	int opt = 1, num1, num2;
	
	while ( opt != 0 ) {
		cout << "Press 1 to Add Numbers\n";
		cout << "Press 2 to Subtract Numbers\n";
		cout << "Press 0 to Exit Program\n";
		cout << "Please Enter Your Choice: ";
		cin >> opt;
		
		switch(opt) {
			case 1:
				Add( num1, num2 );
				break;
				
			case 2:
				Sub( num1, num2 );
				break;
				
			case 0:
				cout << "Program Ended Successfully";
				break;
				
			default:
				cout << "\nOops! Please Enter Correct Option!!" << endl << endl;
				break;
		}
	}
}
