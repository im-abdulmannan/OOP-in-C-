#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main () {
	int A[20];
	int OS = 0, ES = 0, i;
	
	for (int i = 0; i < 20; i++ ) {
		cout << "Enter Number: ";
		cin >> A[i];
	
		if ( A[i]%2 == 0 ) {
			ES += A[i];
		}
		else {
			OS += A[i];
		}
	
	}
	cout << "Results::" << endl;
	cout << "Sum of all ODD = " << OS << endl;
	cout << "Sum of all EVEN = " << ES << endl;
	return 0;
}
