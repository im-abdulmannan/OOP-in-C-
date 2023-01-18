#include <iostream>
using namespace std;

class matrix
{
private:
    int MA[5][5];
    int row;
    int col;

public:
    matrix()
    {
        row = col = 0;
    }

    void get_Value(int num)
    {
        if (row >= 5 && col >= 5)
        {
            return;
        }
        else
        {
            for (int r = 0; r < row; r++)
            {
                for (int c = 0; c < col; c++)
                {
                    MA[r][c] = num;
                    r++;
                    c++;
                }
            }
        }
    }

    void view_Values(void)
    {
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {
                cout << MA[r][c];
            }
        }
    }
};

int main()
{
    matrix M;
    int row, col;
    int opt = 1, num;

    while (opt != 0)
    {
        cout << "Press 1 to get Number\n";
        cout << "Press 2 to View Number\n";
        cout << "Press 3 to Exit\n";
        cin >> opt;

        switch (opt)
        {
        case 1:
            cout << "Enter Number: ";
            cin >> num;
            M.get_Value(num);
            break;

        case 2:
            cout << "Numbers are: ";
            M.view_Values();
            break;
        }
    }
}