#include<iostream>
using namespace std;

int main() {
	int Arr[30], size, position;
	
	cout << "Please Enter the Size of Array (Max-30): ";
	cin >> size;
	
	cout << "\nEnter Numbers:: ";
	for ( int i = 0; i < size; i++ ) {
		cin >> Arr[i];
	}
	
	cout << "Enter Position where you want to delete Number: ";
	cin >> position;
	
	for(int i = position - 1; i < size; i++ ) {
		Arr[i] = Arr[i + 1];
	}
	size--;
	
	for(int i = 0; i < size; i++ ) {
		cout << " " << Arr[i];
	}
	
	return 0;
}
