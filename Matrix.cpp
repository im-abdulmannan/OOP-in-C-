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

    void getValues(int row, int col)
    {
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {
                cout << "Enter Value: ";
                cin >> MA[r][c];
                cout << "Success" << endl;
            }
        }
    }

    void viewValues(int row, int col)
    {
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {
                cout << MA[r][c] << ", ";
            }
        }
    }

    int addScalar(int scalar)
    {
        int r, c;
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {
                MA[r][c] = MA[r][c] + scalar;
            }
        }
        return (MA[r][c]);
    };
};

int main()
{
    int opt = 1, row = 0, col = 0, scalar;
    matrix MA;

    while (opt != 0)
    {
        cout << "Press 1 to Get Values." << endl;
        cout << "Press 2 to View Values." << endl;
        cout << "Press 3 to Add a Scalar to the Matrix." << endl;
        cout << "Press 0 to Exit Program." << endl;
        cout << "Please Enter Your Choice:: ";
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
                MA.getValues(row, col);
            }
            break;

        case 2:
            cout << "Numbers are: ";
            MA.viewValues(row, col);
            cout << endl
                 << endl;
            break;

        case 3:
            cout << "Press Enter Scalar You Want to Add" << endl;
            cin >> scalar;
            MA.addScalar(scalar);
            break;

        default:
            break;
        }
    }
}
