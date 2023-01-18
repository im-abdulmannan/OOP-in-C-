#include <iostream>
using namespace std;

class obj {
	private:
		int Arr[5];
		int counter;
		
	public:
		obj() {
			counter = 0;
		}
		
	int get(int a) {
		for (int i = 0; i < 5; i++) {
			cin >> a;
			Arr[counter];
			counter++;
		}
	}
	
	int viewNum() {
		for ( int i = 0; i < counter; i++ ) {
			cout << Arr[i] << ", ";
		}
	}
};

int main() {
	obj func;
	int opt = 1, num;
	
	while ( opt != 0 ) {
		cout << "Press 1 to get Numbers: " << endl;
		cout << "Press 2 to see Numbers: " << endl;
		cin >> opt;
		
		switch(opt) {
			case 1:
				func.get(num);
				break;
				
			case 2:
				func.viewNum();
				break;
		}
	}
}
