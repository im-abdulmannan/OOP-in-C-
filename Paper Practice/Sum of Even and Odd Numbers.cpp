#include <iostream>
using namespace std;

int main() {
	int Arr[10], Even = 0, Odd = 0, i = 0, opt = 1;
	
	while( opt != 0 ) {
		cout << "Press 1 to Start Calculation" << endl;
		cout << "Press 0 to Exit Program" << endl;
		cout << "Please Select an Option: ";
		cin >> opt;
		
		switch(opt) {
			case 1:
				cout << "Enter 10 Numbers::\n";
				for( i = 0; i < 10; i++ ) {
					cin >> Arr[i];
				}
				
				for( i = 0; i < 10; i++ ) {
					if ( Arr[i] % 2 == 0 ) {
						Even = Even + Arr[i];
					} else {
						Odd = Odd + Arr[i];
					}
				}
				
				cout << "Sum of All Even Numbers = " << Even << endl;
				cout << "Sum of All Odd Numbers = " << Odd << endl;
				break;
				
			case 2:
				cout << "Program ended successfully";
				break;
			}
	}
	return 0;
}
