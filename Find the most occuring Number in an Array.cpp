#include <iostream>
using namespace std;

class count
{
    // private:
    //     int Ary[10];
    //     int counter;

public:
    int Ary[10];
    int counter;
    count()
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

    int frequency(int arr[], int size)
    {
        bool check[size];
        for (int i = 0; i < size; i++)
        {
            check[i] = 0;
        }
        for (int i = 0; i < size; i++)
        {
            if (check[i] == 1)
            {
                continue;
            }
            int count = 1;
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    check[j] = 1;
                    count++;
                }
            }
        }
    }
};

int main()
{
    count Alt;
    int opt = 1, num;

    while (opt != 0)
    {
        {
            cout << "Press 1 to Get Numbers\n";
            cout << "Press 2 to Get Result\n";
            cout << "Press 0 to Exit\n";
            cin >> opt;

            switch (opt)
            {
            case 1:
                for (int i = 0; i < 10; i++)
                {
                    cout << "Enter Number: ";
                    cin >> num;
                    Alt.getNum(num);
                    cout << "Inserted Number Successfully\n";
                }
                break;

            case 2:
                // Alt.frequency(Ary[], );
                // cout << "Frequency of " << Ary[i] << "is: " << count << endl;
                cout << endl
                     << endl;
                break;
            }
        }
    }
}