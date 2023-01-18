#include <iostream>
using namespace std;

int arr[5];
int c = 0;

int add(int a, int b) {
	cout << "\n\nPlease Enter 1st Digit: ";
	cin >> a;
	cout << "Please Enter 2nd Digit: ";
	cin >> b;
	arr[c] = ( a + b );
	cout << "Addition = " << ( a + b ) << "\n\n\n";
	c++;
}

int sub(int a, int b) {
	cout << "\n\nPlease Enter 1st Digit: ";
	cin >> a;
	cout << "Please Enter 2nd Digit: ";
	cin >> b;
	arr[c] = ( a - b );
	cout << "Subtraction = " << ( a - b ) << "\n\n\n";
	c++;
}

int mul(int a, int b) {
	cout << "\n\nPlease Enter 1st Digit: ";
	cin >> a;
	cout << "Please Enter 2nd Digit: ";
	cin >> b;
	arr[c] = ( a * b );
	cout << "Multiplication = " << ( a * b ) << "\n\n\n";
	c++;
}

int div(int a, int b) {
	cout << "\n\nPlease Enter 1st Digit: ";
	cin >> a;
	cout << "Please Enter 2nd Digit: ";
	cin >> b;
	arr[c] = ( a / b );
	cout << "Division = " << ( a / b ) << endl << "Reminder = " << ( a % b ) << "\n\n\n";
	c++;
}

void viewHis(void) {
	int i = 0;
	if ( arr[i] == 0 ) {
		cout << "\n\nCurrently history is Empty!!";
	}
	else {
		cout << "\n\nHistory = ";
		for ( i = 0; i < c; i++ ) {
			cout << arr[i] << ", ";
		}
	}	
	
	cout << "\n\n";
}

int main () {
	int opt = 1, num1, num2;
	
	while( opt != 0 ) {
		cout << "Press 1 to Add Numbers.\nPress 2 to Subtract Numbers.\nPress 3 to Multiply Numbers.\nPress 4 to Divide Numbers.\nPress 5 to view History.\nPress 0 to Exit.\nPlease Enter Your Choice:: ";
		cin >> opt;
		
		switch(opt) {
			case 1:
				add(num1, num2);
				break;
				
			case 2:
				sub(num1, num2);
				break;
				
			case 3:
				mul(num1, num2);
				break;
				
			case 4:
				div(num1, num2);
				break;
				
			case 5:
				viewHis();
				break;
				
			case 0:
				cout << "\n\n\nProgram Ended Successfully!!";
				break;
				
			default:
				cout << "\n\nPlease Enter Correct Option...\n\n";
				break;
		}
	}
	
	return 0;
}
