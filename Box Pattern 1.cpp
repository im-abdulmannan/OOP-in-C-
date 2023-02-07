#include <iostream>
using namespace std;

int main() {
    for(int a = 0; a <= 8; a++) {
        cout << "*";
    }
    cout << endl;

    for (int b = 0; b <= 2; b++) {
        for(int c = 0; c < 1; c++) {
            cout << "*";
        }
        for (int d = 0; d <= 6; d++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for(int e = 0; e <= 8; e++) {
        cout << "*";
    }

    return 0;
}