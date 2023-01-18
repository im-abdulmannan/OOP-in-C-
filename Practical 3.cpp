#include <iostream>
#include <conio.h>

using namespace std;

class mdt {
	public: int x;
	public: char ch;
};

int main () {
	mdt y;
	cout << "Enter an Integer: ";
	cin >> y.x;
	
	cout << "Enter a Character: ";
	cin >> y.ch;
	
	
	cout << y.ch;
	cout << " = ";
	cout << y.x;
	
	return 0;
}
