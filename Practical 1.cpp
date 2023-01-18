#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int main () {
	int opt = 1, num_1 = 0, num_2 = 0, result = 0;
	
	while(opt != 0) {
		cout << "1: Get Numbers" << endl;
//		cout << "2: Add Numbers" << endl;
//		cout << "3: Subtract Numbers" << endl;
//		cout << "4: Multiply Numbers" << endl;
//		cout << "5: Divide Numbers" << endl;
		cout << "0: To Exit" << endl;
		cout << "\nPlease Enter Your Choice:";
		cin >> opt;
		
		if ( opt == 1 ) {
			cout << "2: Add Numbers\n3: Subtract Numbers\n4: Multiply Numbers\n5: Division Numbers\n\nPlease Enter Your Choice:";
			cin >> opt;
			
			//	Enter Numbers
			cout << "\nEnter First Number: ";
			cin >> num_1;
		
			cout << "Enter Second Number: ";
			cin >> num_2;

			
			//	Results
			if ( opt == 2 ) {
				cout << "Addition = " << num_1 + num_2 << endl << endl;
				continue;
			} else if ( opt == 3 ) {
				cout << "Subtraction = " << num_1 - num_2 << endl << endl;
				continue;
			} else if ( opt == 4 ) {
				cout << "Multiplication = " << num_1 * num_2 << endl << endl;
				continue;
			} else if ( opt == 5 ) {
				cout << "Division = " << num_1 / num_2 << endl << endl;
				continue;
			}
		}
		if ( opt == 0 ) {
			break;
		} else {
			cout << "Sorry Wrong Command!" << endl << endl;
			continue;
		}		
	}    // End While Loop 
	
	return 0;
	
}

