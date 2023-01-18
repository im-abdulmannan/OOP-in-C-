#include <iostream>
using namespace std;

class calculator {
	private:
		int NA[10];
		int counter;
		
	public:
		calculator () {
			counter = 0;
		}
		int Add( int a, int b ) {
			NA[counter++] = a + b;
			return( a + b );
		}
		int Sub( int a, int b ) {
			NA[counter++] = a - b;
			return( a - b );
		}
		int Mul( int a, int b ) {
			NA[counter++] = a * b;
			return( a * b );
		}
		int Div( int a, int b ) {
			NA[counter++] = a / b;
			return( a / b );
		}
		void ViewHis() {
			for ( int i = 0; i < counter; i++ ) {
				cout << NA[i] << ", ";
			}
		}
};

int main() {
	calculator casio;
	int n1, n2, opt = 1;
	
	while(opt != 0) {
		cout << "Press 1 to Add Numbers.\n";
		cout << "Press 2 to Subtract Numbers.\n";
		cout << "Press 3 to Multiply Numbers.\n";
		cout << "Press 4 to Division Numbers.\n";
		cout << "Press 5 to View History.\n";
		cout << "Press 0 to Exit Program.\n";
		cout << "Please Enter Your Option:: ";
		cin >> opt;
		
		switch(opt) {
			case 1:
				cout << "\nEnter 1st Number: ";
				cin >> n1;
				cout << "Enter 2nd Number: ";
				cin >> n2;
				cout << "Addition = " << casio.Add( n1, n2 ) << endl << endl;
				break;
				
			case 2:
				cout << "\nEnter 1st Number: ";
				cin >> n1;
				cout << "Enter 2nd Number: ";
				cin >> n2;
				cout << "Subtraction = " << casio.Sub( n1, n2 ) << endl << endl;
				break;
				
			case 3:
				cout << "\nEnter 1st Number: ";
				cin >> n1;
				cout << "Enter 2nd Number: ";
				cin >> n2;
				cout << "Multiplication = " << casio.Mul( n1, n2 ) << endl << endl;
				break;
				
			case 4:
				cout << "\nEnter 1st Number: ";
				cin >> n1;
				cout << "Enter 2nd Number: ";
				cin >> n2;
				cout << "Division = " << casio.Div( n1, n2 ) << endl << endl;
				break;
			
			case 5:
				cout << "\nHistory: ";
				casio.ViewHis();
				cout << endl << endl;
				break;
				
			case 0:
				cout << "\n\nProgram Ended Successfully\n\n";
				break;
			
			default:
				cout << "\nPlease Enter Correct Option!!!\n\n";
				break;
		}
	}
}
