// C++ program to find sum of two matrix
#include <iostream>
using namespace std;

class matrix
{
private:
    int one[50][50];
    int two[50][50];
    int sum[50][50];
    int row;
    int col;

public:
    matrix()
    {
        row = col = 0;
    }

    void getValue1(int row, int col)
    {
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {
                cout << "Enter Value: ";
                cin >> one[r][c];
            }
        }
    }

    void getValue2(int row, int col)
    {
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {
                cout << "Enter Value: ";
                cin >> two[r][c];
            }
        }
    }

    void Add(int row, int col)
    {
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {
                sum[r][c] = one[r][c] + two[r][c];
            }
        }
        // View Sum
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {
                cout << sum[r][c] << ", ";
            }
        }
    }
};

int main()
{
    int Num, opt = 1, row = 0, col = 0;
    matrix MA;

    while (opt != 0)
    {
        cout << "Press 1 to Get Numbers" << endl;
        cout << "Press 2 to Add Numbers" << endl;
        cout << "Press 0 to Exit Program" << endl;
        cout << "Please Enter Your Choice:: " << endl;
        cin >> opt;

        switch (opt)
        {
        case 1:
            cout << "Enter Row: ";
            cin >> row;
            cout << "Enter Column: ";
            cin >> col;
            if (!((row > 0 && row < 6) && (col > 0 && col < 6)))
            {
                cout << "Order is Invalid";
            }
            else
            {
                cout << "Enter Value for 1st matrix: " << endl;
                MA.getValue1(row, col);
                cout << "Enter Value for 2nd matrix: " << endl;
                MA.getValue2(row, col);
            }
            break;

        case 2:
            cout << "Sum is: ";
            MA.Add(row, col);
            cout << endl;
            break;



        default:
            break;
        }
    }
}