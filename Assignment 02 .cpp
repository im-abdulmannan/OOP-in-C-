// get 20 numbers in an array
// delete one Number (get from user)
// delete all numbers ( // // // )
// find and replace one specific number of array
// find and replace all

#include <iostream>
using namespace std;

class num
{
private:
    int Ary[10];
    int counter;

public:
    num()
    {
        counter = 0;
    }

    void getNum(int N)
    {
        if (counter >= 10)
        {
            return;
        }
        Ary[counter++] = N;
    }

    // find and replace all
    void findAndReplaceAll(int num, int numWith)
    {
        for (int i = 0; i < counter; i++)
        {
            if (Ary[i] == num)
            {
                Ary[i] = numWith;
            }
        }
    }

    // find and replace one specific number of array
    int findAndReplace(int num, int numWith)
    {
        for (int i = 0; i < counter; i++)
        {
            if (num == Ary[i])
            {
                return (Ary[i] = numWith);
            }
        }
    }

    // Delete a Number
    void deleteNum(int N)
    {
        for (int i = N - 1; i < counter; i++)
        {
            Ary[i] = Ary[i + 1];
        }
        counter--;
    }

    void checkNDisplay(void)
    {
        int i = 0;
        for (i = 0; i < counter; i++)
        {
            cout << Ary[i] << ", ";
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
        cout << "Press 3 to Replace Number\n";
        cout << "Press 4 to Find And Replace All Numbers\n";
        cout << "Press 5 to Delete Specific Number\n";
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
            cout << "Numbers are:: ";
            objNum.checkNDisplay();
            cout << endl
                 << endl;
            break;

        case 3:
            cout << "Enter Index to Replace: ";
            cin >> a;
            cout << "Enter Number to Replace: ";
            cin >> b;
            objNum.findAndReplace(a, b);
            break;

        case 4:
            cout << "Enter Number You Want to Replace: ";
            cin >> a;
            cout << "Enter Number You Want to Replace With: ";
            cin >> b;
            objNum.findAndReplaceAll(a, b);
            break;

        case 5:
            cout << "Enter the Position you want to delete";
            cin >> a;
            objNum.deleteNum(a);
            break;
        }
    }
    return 0;
}