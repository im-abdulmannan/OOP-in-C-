#include <iostream>
using namespace std;

class palin
{
private:
    int Ar[5];
    int counter;

public:
    palin()
    {
        counter = 0;
    }

    void getValue(int n)
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter Number: ";
            cin >> n;
            Ar[i] = n;
            counter++;
        }
    }

    void palindrome(int flag)
    {
        for (int i = 0; i <= counter / 2 && counter != 0; i++)
        {
            if (Ar[i] != Ar[counter - i - 1])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "Not Palindrome";
        }
        else
        {
            cout << "Palindrome";
        }
    }
};

int main()
{
    palin p;
    int num, flag = 0;

    cout << "Checking if Array an Palindrome or NOT\n";
    p.getValue(num);
    p.palindrome(flag);

    return 0;
}