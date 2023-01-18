#include <iostream>

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
			cout << i << " ";
		}
		
		
		while ( A[i] = 0 ) {
			
			
			
			
			cout << "Enter Number to fill deleted space: ";
			cin >> A[i];		
		}
		
		cout << A[i];
	}
	
	return 0;
}
