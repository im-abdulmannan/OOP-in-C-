#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main () {
	int A[10];
	
	for (int i = 0; i < 10; i++) {
		cout << "Enter Number: ";
		cin >> A[i];
	}
	
	for (int i = 0; i < 10; i++ ) {
		
		
		if ( A[i] % 2 == 0 ) {
			A[i] = 0;
			cout << A[i] << " ";
		}
		else {
			cout << A[i] << " ";
		}

	}
	
	return 0;
}
