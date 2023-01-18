#include<iostream>
using namespace std;

class calc {
	private:
		int Arr[25];
		int counter;
	
	public:
		calc() {
			counter = 0;
		}
		
	int Add(int a, int b) {
		Arr[counter++];
		return(a + b);
	}
	
	int Sub(int a, int b) {
		Arr[counter++];
		return(a - b);
	}
	
	int Mul(int a, int b) {
		Arr[counter++];
		return(a * b);
	}
	
	int Div(int a, int b) {
		Arr[counter++];
		return(a / b);
	}
	
	void his() {
		for(int i = 0; i < counter; i++ ) {
			cout << Arr[i++] << ", ";
		}
	}
};

int main() {
	calc func;
	int opt = 1;
	int num1, num2;
	
	while( opt != 0 ) {
		cout << "Press 1 to Add Number" << endl;
		cout << "Press 2 to Subtract Number" << endl;
		cout << "Press 3 to Multiply Number" << endl;
		cout << "Press 4 to Divide Number" << endl;
		cout << "Press 5 to View History" << endl;
		cout << "Please Entre Your Choice:: ";
		cin >> opt;
		
		switch(opt) {
			case 1:
				cout << "Enter 1st Number: ";
				cin >> num1;
				cout << "Enter 2nd Number: ";
				cin >> num2;
				cout << "Addition = ";
				func.Add(num1, num2);
				break;
				
			case 2:
				cout << "Enter 1st Number: ";
				cin >> num1;
				cout << "Enter 2nd Number: ";
				cin >> num2;
				cout << "Subtraction = ";
				func.Sub(num1, num2);
				break;
				
			case 3:
				cout << "Enter 1st Number: ";
				cin >> num1;
				cout << "Enter 2nd Number: ";
				cin >> num2;
				cout << "Multiply = ";
				func.Mul(num1, num2);
				break;
				
			case 4:
				cout << "Enter 1st Number: ";
				cin >> num1;
				cout << "Enter 2nd Number: ";
				cin >> num2;
				cout << "Division = ";
				func.Div(num1, num2);
				break;
				
			case 5:
				func.his();
				break;
		}
	}
}
