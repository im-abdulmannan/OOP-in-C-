#include <iostream>
using namespace std;

class num
{
private:
    int Ary[10];
    int counter;
    int numFound;

public:
    num()
    {
        counter = 0;
        numFound = 0;
    }

    void getNum(int N)
    {
        if (counter >= 10)
        {
            return;
        }
        Ary[counter++] = N;
    }

    int findAndReplace(int num, int numWith)
    {
        int i = 0;
        for (i = 0; i < counter; i++)
        {
            if (Ary[i] == num)
            {
                Ary[i] = numWith;
            }
        }
    }

    void checkNDisplay(void)
    {
        int i = 0;
        for (i = 0; i < counter; i++)
        {
            cout << "Numbers are" << Ary[i] << endl;
        }
    }
};

int main()
{
    num objNum;
    int num, opt = 1, a, b;

    while (opt != 0)
    {
        cout << "Press 1 to Get Numbers\n";
        cout << "Press 2 to Display Numbers\n";
        cout << "Press 3 to Find And Replace Numbers\n";
        cout << "Press 0 to Exit Program\n";
        cout << "Please Enter Your Option:: ";
        cin >> opt;

        switch (opt)
        {
        case 1:
            for (int i = 0; i < 10; i++)
            {
                cout << "Enter Number: ";
                cin >> num;
                objNum.getNum(num);
                cout << "Inserted Number Successfully\n";
            }
            break;

        case 2:
            cout << "Numbers are: ";
            objNum.checkNDisplay();
            cout << endl
                 << endl;
            break;

        case 3:
            cout << "Enter Number You Want to Replace: ";
            cin >> a;
            cout << "Enter Number You Want to Replace With: ";
            cin >> b;
            objNum.findAndReplace(a, b);
        }
    }
    return 0;
}