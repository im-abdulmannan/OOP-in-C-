#include <iostream>
using namespace std;

int arr[5];
int counter = 0;

Add(int num) {
	arr[counter] = num;
	counter++;
	cout << "Congratulations! You inserted Number Successfully.\n\n";
}

View() {
	cout << "\nNumbers store is Array are = ";
	for (int i = 0; i < counter; i++ ) {
		cout << arr[i] << ", ";
	}
	cout << "\n\n";
}

Delete(int indx) {
	if ( counter == 0 ) {
		cout << "\nEmpty!!\n";
		return 0;
	}
	
	if ( indx < 0 || indx >= counter ) {
		cout << "\nInvalid Index.\n";
		return 0;
	}
	
	if ( indx >= 0 && indx < counter ) {
		arr[indx] = arr[counter - 1];
		counter--;
		cout << "\nNumber Deleted Successfully!\n";
		return 0;
	}
}

int main() {
	int opt = 1;
	int num = 0;
	
	while( opt != 0 ) {
		cout << "Press 1 to Add Number.\n";
		cout << "Press 2 to View Number.\n";
		cout << "Press 3 to Delete Number.\n";
		cout << "Press 0 to Exit Program.\n";
		cout << "Please Enter your Choice:: ";
		cin >> opt;
		
		switch(opt) {
			case 1:
				cout << "\nPlease Enter Number: ";
				cin >> num;
				if ( counter < 5 ) {
					Add(num);
				} else {
					cout << "Sorry! Storage is already Full.\n\n";
				}
				break;
				
			case 2:
				View();
				break;
				
			case 3:
				cout << "\nPlease Enter Index to Delete: ";
				cin >> num;
				Delete(num);
				break;
				
			case 0:
				cout << "\n\n\nProgram Ended Successfully!";
				
			default:
				if ( !opt == 0 ) {
				cout << "\nPlease Enter Correct Options. \n\n";
				}
		}
	}
}
