#include <iostream>
#include <conio.h>

using namespace std;

class calc {
	public:
		int num1;
		int num2;
		char opt;
};

calc history[5];
int counter = 0;

func(calc v1) {
	switch (v1.opt) {
		case '+':
			cout << "Addition = " << v1.num1 + v1.num2 << endl << endl;
			break;
			
		case '-':
			cout << "Subtraction = " << v1.num1 - v1.num2 << endl << endl;
			break;
			
		case '*':
			cout << "Multiplication = " << v1.num1 * v1.num2 << endl << endl;
			break;
			
		case '/':
			cout << "Division = " << v1.num1 / v1.num2 << endl << endl;
			break;
			
		default:
			cout << "Please Enter Given Operators.";
			break;
	}
	
		history[counter].num1 = v1.num1;
		history[counter].num2 = v1.num2;
		history[counter].opt = v1.opt;
		
		counter+=1;
}

func(calc v2) {
	for(int j = 0; j < counter; j++) {
		cout << "First Integer : " << history[counter].num1 << endl;
		cout << "Second Integer: " << history[counter].num2 << endl;
		cout << "Operators: " << history[counter].opt << endl;
	}
}

int main () {	
	int choice = 1;
	while ( choice != 0 ) {
		cout << "Press 1 to perform Calculations" << endl;
		cout << "Press 2 to view History" << endl;
		cout << "Press 0 to Exit Program" << endl;
		cout << "Please Enter Your Choice: ";
		cin >> choice;
		
	
		switch (choice) {
			case 1:
				
				calc v1;
	
				cout << "Enter 1st Integer: ";
				cin >> v1.num1;
		 
				cout << "Enter 2nd Integer: ";
				cin >> v1.num2;
		
				cout << "Enter Given Operations (+, -, *, /): ";
				cin >> v1.opt;
				
				func(v1);
				
				break;
				
			case 2:
				
				calc v2;
				
				func(v2);
				break;
				
			default :
				cout << "Enter right Operation";
				
		} // end switch()
	}  // end while loop
} // end main()
