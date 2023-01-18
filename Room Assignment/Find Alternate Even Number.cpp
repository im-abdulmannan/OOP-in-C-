#include <iostream>
using namespace std;

class Even {
	private:
		int Ary[25];
		int counter;
		
	public:
		Even() {
			counter = 0;
		}
		bool isRangeValid(int a, int b) {
			if ( a > b ) {
				return false; // If Num 1 is less than Num 2 then return false
			}
			if ( a < 0 || b < 0 ) {
				return false; // Check if num1 and num2 are positive
			}
			if ((( b - a ) / 4 ) > 25 ) {
				return false; // Checking overlapping condition
			}
			else {
				return true;
			}
		}
		
		void findEvenNums ( int n1, int n2 ) {
			if ( n1 % 2 == 0 ) {
				for ( int i = n1; i <= n2; i = i + 4 ) {
					Ary[counter++] = i;
				}
			} else {
				n1 = n1 + 1;
				for ( int i = n1; i <= n2; i = i + 4 ) {
					Ary[counter++] = i;
				}
			}
		}
		
		void viewEven() {
			for ( int i = 0; i < counter; i++ ) {
				cout << Ary[i] << ", ";
			}
		}
};

int main() {
	int num1, num2;
	int opt = 1;
	Even Obj;
	
	while( opt != 0 ) {
		cout << "Press 1 to Storing Alternate Even Numbers\n";
		cout << "Press 2 to Viewing Storing Numbers\n";
		cout << "Press 0 to Exit Program\n";
		cout << "Please Enter Your Choice:: ";
		cin >> opt;
		
		switch(opt) {
			case 1:
				cout << "Enter First Number: ";
				cin >> num1;
				cout << "Enter Second Number: ";
				cin >> num2;
				
				Obj.isRangeValid(num1, num2); // true
				Obj.findEvenNums(num1, num2);
				break;
				
			case 2:
				cout << "Even Numbers Are = ";
				Obj.viewEven();
				cout << "\n\n\n";
				break;
				
			case 0:
				cout << "\n\n\nProgram Exit Successfully";
				break;
				
			default:
				cout << "\n\nPlease Enter Correct Option\n\n";
				break;
		}
	}
	
	return 0;
}
