#include <iostream>
using namespace std;

orders() {
	
}

reviews() {
	
}

costumers() {
	
}

products() {
	
}

int main() {
	int num;
	int opt;
	
	while( opt != 1 ) {
		
		cout << "Press 1 to See Products.";
		cout << "Press 2 to See Costumers.";
		cout << "Press 3 to See Reviews.";
		cout << "Press 4 to Check Orders.";
		cout << "Press 0 to exit.";
		cout << "Please Enter Your Choice: ";
		
		
		
		switch(opt) {
			case 1:
				products();
				break;
			
			case 2:
				costumers();
				break;
				
			case 3:
				reviews();
				break;
				
			case 4:
				orders();
				break;
				
			default:
				cout << "Please Enter Correct Option.\n";
				break;
		}
	}
	
}
