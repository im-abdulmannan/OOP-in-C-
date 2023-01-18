#include <iostream>
using namespace std;

class calc {
	private:
		int Arr[20];
		int counter;
		
	public:
		calc() {
			counter = 0;
		}
		
		int Add( int a, int b ) {
			Arr[counter++] = ( a + b );
			return( a + b );
		}
		
		int Sub( int a, int b ) {
			Arr[counter++] = ( a - b );
			return( a - b );
		}
		
		int Mul( int a, int b ) {
			Arr[counter++] = ( a * b );
			return( a * b );
		}
		
		int Div( int a, int b ) {
			Arr[counter++] = ( a / b );
			return( a / b );
		}
		
		void viewHis() {
			for( int i = 0; i < counter; i++ ) {
				cout << Arr[i] << ", ";
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
		cout << "Press 0 to Exit Program" << endl;
		cout << "Please Enter Your Choice:: ";
		cin >> opt;
		
		switch(opt) {
			case 1:
				cout << "Enter 1st Digit: ";
				cin >> num1;
				cout << "Enter 2nd Digit: ";
				cin >> num2;
				cout << "\nAddition = " << func.Add(num1, num2) << endl << endl;
				break;
				
			case 2:
				cout << "Enter 1st Digit: ";
				cin >> num1;
				cout << "Enter 2nd Digit: ";
				cin >> num2;
				cout << "\nSubtraction = " << func.Sub(num1, num2) << endl << endl;
				break;
				
			case 3:
				cout << "Enter 1st Digit: ";
				cin >> num1;
				cout << "Enter 2nd Digit: ";
				cin >> num2;
				cout << "\nMultiplication = " << func.Mul(num1, num2) << endl << endl;
				break;
			
			case 4:
				cout << "Enter 1st Digit: ";
				cin >> num1;
				cout << "Enter 2nd Digit: ";
				cin >> num2;
				cout << "\nDivision = " << func.Div(num1, num2) << endl << endl;
				break;
			
			case 5:
				cout << "\nHistory: \n\t";
				func.viewHis();
				cout << "\n\n";
				break;
				
			case 0:
				cout << "\n\n\nProgram Ended Successfully";
				break;
				
			default:
				cout << "\nPlease Select from the Given Menu\n\n";
		}
	}
	return 0;
}
