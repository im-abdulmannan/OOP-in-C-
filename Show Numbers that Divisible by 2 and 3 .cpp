#include <iostream>
using namespace std;

class num {
    private:
        int Ary[10];
        int counter;
    public:
        num() {
            counter = 0;
        }
        
    void getNum(int N) {
        if( counter >= 10 ) {
            return;
        }
        Ary[counter++] = N;
    }
    
    void checkNDisplay(void) {
        int i = 0;
        for( i = 0; i < counter; i++ ) {
            if( Ary[i] % 2 == 0 || Ary[i] % 3 == 0 ) {
                cout << Ary[i] << ", ";
            }
        }
    }
};

int main() {
    num objNum;
    int num, opt = 1;
    
    while( opt != 0 ) {
        cout << "Press 1 to Get Numbers\n";
        cout << "Press 2 to Display Numbers\n";
        cout << "Press 0 to Exit Program\n";
        cout << "Please Enter Your Option:: ";
        cin >> opt;
        
        switch(opt) {
            case 1:
                cout << "Enter Number: ";
                cin >> num;
                cout << "Inserted Number Successfully\n";
                objNum.getNum(num);
                break;
            case 2:
                cout << "Numbers are: ";
                objNum.checkNDisplay();
                cout << endl << endl;
                break;
        }
    }
    return 0;
}