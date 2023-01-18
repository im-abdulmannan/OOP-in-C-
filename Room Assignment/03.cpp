#include<iostream>
#include<stdlib.h>
using namespace std;

int main () {
	int arr[10], size, i, position, k, j;
	
	cout << "Enter the size of an Array (size: 10): ";
	cin >> size;
	
	for( i = 0; i < size; i++ ){
	cout << "Enter Number: ";
		cin>>arr[i];
	}
	
	cout << "Enter Position You want to delete number: ";
	cin >> position;
	
	if ( i = position ) {
		arr[i] = arr[i] * 0;
//		k = arr[i];
//		arr[i] = arr[10];
	}
	
//	for( i = position; i < size; i++ ){
//		arr[i] = arr[i] * 0;
//	}
	
	for ( i = 0; i < size; i++ ) {
		cout << arr[i] << " "; 
	}
}
