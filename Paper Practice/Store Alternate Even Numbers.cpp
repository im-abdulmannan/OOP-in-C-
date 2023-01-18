#include<iostream>
using namespace std;

class EN {
	private:
		int Arr[25];
		int counter;
		
	public:
		EN() {
			counter = 0;
		}
		
	bool checkCondition(int num1, int num2) {
		if ( num1 >= num2 ) {
			return false;
		}
		if ( num1 < 0 || num2 < 0 ) {
			return false;
		}
		if ((( num2 - num1 ) / 4) > 25 ) {
			return false;
		}
		else {
			return true;
		}
	}
	
	int altEvenNumber ( int num1, int num2 ) {
		cout << "Alternate Even Numbers Stored!\n";
		
		if( num1 % 2 == 0 ) {
			for ( int i = num1; i < num2; i = i + 4 ) {
				Arr[counter] = i;
				counter++;
			}
		} else {
			for ( int i = num1; i < num2; i = i + 4 ) {
				Arr[counter] = i;
				counter++;
			}
		}
	}
	
	void view() {
		for ( int j = 0; j < counter; j++ ) {
			cout << Arr[j] << ", ";
		}
	}
};

int main() {
	EN Alt;
	int opt = 1, num1, num2;
	
	while( opt != 0 ) {
		cout << "Press 1 to Store Alternate Even Numbers" << endl;
		cout << "Press 2 to view Stored Alternate Even Numbers" << endl;
		cout << "Press 0 to Exit Program" << endl;
		cout << "Please Enter Your Option:: ";
		cin >> opt;
		
		switch(opt) {
			case 1:
				cout << "Enter 1st Digit: ";
				cin >> num1;
				cout << "Enter 2nd Digit: ";
				cin >> num2;
				if ( Alt.checkCondition(num1, num2) == true ) {
					Alt.altEvenNumber(num1, num2);
				}
				break;
				
			case 2:
				cout << "Alternate Even Numbers Are: ";
				Alt.view();
				cout << endl;
				break;
		}
	}
	
	return 0;
}
