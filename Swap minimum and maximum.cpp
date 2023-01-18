#include <iostream>
using namespace std;

class MinMax {
    private:
        int Ary[20];
        int counter;
        int sn;
        int si;
        int ln;
        int li;

    public:
        MinMax() {
            counter = 0;
            sn = 0;
            si = 0;
            ln = 0;
        }

    void getNum(int N) {
        for (int i = 0; i < counter; i++) {
            cin >> Ary[i];
        }
    }

    void check(MinMax) {
        for (int i = 0; i < counter; i++) {
            if (ln < A[i]) {
                ln = A[i];
                li = i;
            }
            if (sn > A[i]) {
                sn = A[i];
                si = i;
            }
        }
    }

    void swapNum(int max, int min ) {
        
    }
}