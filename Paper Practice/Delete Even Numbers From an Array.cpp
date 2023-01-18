#include<iostream>
using namespace std;

int main() {
	int Arr[10], even = 0, odd = 0;
	
	cout << "Enter Numbers::\n";
	for(int i = 0; i < 10; i++ ) {
		cin >> Arr[i];
	}
	
	for(int i = 0; i < 10; i++ ) {
		if( Arr[i] % 2 == 0 ) {
			cout << Arr[i] * 0 << ", ";
		} else {
			cout << Arr[i] << ", ";
		}
	}
	return 0;
}
