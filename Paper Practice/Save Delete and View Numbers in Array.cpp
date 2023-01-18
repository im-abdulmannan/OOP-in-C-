#include<iostream>
using namespace std;

int Arr[5];
int counter;

int Add(int a) {
	Arr[counter] = a;
	counter++;
	return a;
}

int Delete(int index) {
	if(counter == 0) {
		cout << "Empty";
		return 0;
	}
	if(index < 0 || index >= counter) {
		cout << "Invalid Index";
		return 0;
	}
	if(index > 0 && index < counter) {
		Arr[index] = Arr[counter - 1];
		counter--;
		cout << "Number Deleted" << endl;
		return 0;
	}
}

void View() {
	cout << endl << endl << "Array Numbers are: ";
	for ( int i = 0; i < counter; i++ ) {
		cout << Arr[i] << ", ";
	}
}

int main() {
	int opt = 1, num;
	
	while(opt != 0) {
		cout << "Press 1 to Add Number\n";
		cout << "Press 2 to Delete Number\n";
		cout << "Press 3 to View Number\n";
		cout << "What You Want:: ";
		cin >> opt;
		
		switch(opt) {
			case 1:
				cout << "\nEnter Number: ";
				cin >> num;
				if ( counter < 5 ) {
					Add(num);
					cout << "Congratulations! Inserted Number Successfully";
				} else {
					cout << "\nSorry Number not Inserted." << endl << endl;
				}
				break;
				
			case 2:
				cout << "\nEnter Index You want to Delete";
				cin >> num;
				Delete(num);
				break;
				
			case 3:
				cout << "\nNumbers in Array are: ";
				View();
				cout << endl << endl;
				break;
		}
	}
}
