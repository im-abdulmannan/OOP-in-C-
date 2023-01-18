/* Assignment # 03
01. Add Scalar in a Matrix
02. Subtract scalar from a Matrix
03. Multiply scalar with a matrix
04. Divide by scalar with a matrix
05. Add two matrices
06. Subtract two matrices
07. Multiply two matrices
08. Check if a matrix is identity
09. Check if a matrix is Symmetric
10. Check if a matrix is null */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class matrix
{
private:
    int MA[50][50];
    int MB[50][50];
    int MR[50][50];
    int row;
    int col;
    int row1;
    int col1;

public:
    matrix()
    {
        row = 0;
        col = 0;
        row1 = 0;
        col1 = 0;
    }

    void assignMatrixOrder(int r, int c)
    {
        row = r;
        col = c;
    }

    void assignMatrixOrderA(int r, int c)
    {
        row1 = r;
        col1 = c;
    }

    void getMatVal1(int row, int col)
    {
        for (int r = 0; r < row; r++)
            for (int c = 0; c < col; c++)
            {
                cout << "Enter Value: ";
                cin >> MA[r][c];
            }
    }

    void getMatVal2(int row, int col)
    {
        for (int r = 0; r < row; r++)
            for (int c = 0; c < col; c++)
            {
                cout << "Enter Value: ";
                cin >> MB[r][c];
            }
    }

    void viewNum(void)
    {
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
                cout << MA[r][c] << " ";
            cout << "\n";
        }
    }

    // Add Scalar in a Matrix
    void scalarAddMat(int scalar)
    {
        for (int r = 0; r < row; r++)
            for (int c = 0; c < col; c++)
                MA[r][c] = MA[r][c] + scalar;
    }

    // Subtract scalar from a Matrix
    void scalarSubMat(int scalar)
    {
        for (int r = 0; r < row; r++)
            for (int c = 0; c < col; c++)
                MA[r][c] = MA[r][c] - scalar;
    }

    // Multiply scalar with a matrix
    void scalarMultMat(int scalar)
    {
        for (int r = 0; r < row; r++)
            for (int c = 0; c < col; c++)
                MA[r][c] = MA[r][c] * scalar;
    }

    // Divide by scalar with a matrix
    void scalarDivMat(int scalar)
    {
        for (int r = 0; r < row; r++)
            for (int c = 0; c < col; c++)
                MA[r][c] = MA[r][c] / scalar;
    }

    // Check if a matrix is identity
    void checkIdentityMatrix(int flag)
    {
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {
                if ((MA[r][c] != 1) && (MA[c][r] != 0))
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
            cout << "The given matrix is an identity matrix.\n";
        else
            cout << "The given matrix is not an identity matrix.\n";
    }

    // Check if a matrix is Symmetric
    void checkSymmetricMat(int flag)
    {
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {
                if (MA[r][c] != MA[c][r])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
            cout
                << "The given matrix is an Symmetric matrix.\n";
        else
            cout << "The given matrix is not an Symmetric matrix.\n";
    }

    // Check if a matrix is Null
    void checkNullMatrix(int flag)
    {
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
                if (MA[r][c] == 0)
                    flag = 1;
        }
        if (flag == 1)
            cout << "Matrix is a null matrix!\n";
        else
            cout << "Given matrix is not a null matrix!\n";
    }

    // Add two Matrices
    void addTwoMat(void)
    {
        for (int r = 0; r < row; r++)
            for (int c = 0; c < col; c++)
                MR[r][c] = MA[r][c] + MB[r][c];
    }

    // Subtract Two Matrices
    void subTwoMat(void)
    {
        for (int r = 0; r < row; r++)
            for (int c = 0; c < col; c++)
                MR[r][c] = MA[r][c] - MB[r][c];
    }

    // Result of Two Matrices Operation
    void result(void)
    {
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
                cout << MR[r][c] << " ";
            cout << "\n";
        }
    }

    // Multiply Two Matrices
    void mulTwoMat(void)
    {
        for (int r = 0; r < row; r++)
            for (int c = 0; c < col1; c++)
            {
                MR[r][c] = 0;
                for (int k = 0; k < row1; k++)
                    MR[r][c] += MA[r][k] * MB[k][c];
            }
        cout << "Product of matrices\n";
        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col1; c++)
                cout << MR[r][c] << "  ";
            cout << "\n";
        }
    }
};

int main()
{
    matrix m;
    int opt = 1, r = 0, c = 0, num = 0, flag = 0, r1 = 0, c1 = 0;

    while (opt != 0)
    {
        cout << "Press 1 to Get Numbers\n";
        cout << "Press 2 to View Numbers\n";
        cout << "Press 3 to Add Scalar in a matrix\n";
        cout << "Press 4 to Subtract Scalar from a matrix\n";
        cout << "Press 5 to Multiply Scalar to a matrix\n";
        cout << "Press 6 to Divide Matrix by a scalar\n";
        cout << "Press 7 to Check if Matrix is Identity Matrix\n";
        cout << "Press 8 to Check if Matrix is Symmetric Matrix\n";
        cout << "Press 9 to Check if Matrix is Null Matrix\n";
        cout << "Press 10 to Add Two Matrices\n";
        cout << "Press 11 to Subtract Two Matrices\n";
        cout << "Press 12 to Multiply Two Matrices\n";
        cout << "Press 0 to Exit Program\n";
        cout << "Please Enter Your Choice:: ";
        cin >> opt;

        switch (opt)
        {
        case 1:
            cout << "\nEnter Row: ";
            cin >> r;
            cout << "Enter Column: ";
            cin >> c;
            if (!((r > 0 && r < 6) && (c > 0 && c < 6)))
                cout << "\nOrder is Invalid\n\n";
            else
            {
                m.assignMatrixOrder(r, c);
                cout << "\nEnter Values For Matrix\n";
                m.getMatVal1(r, c);
            }
            break;

        case 2:
            cout << "Matrix:\n";
            m.viewNum();
            cout << "\n";
            break;

        case 3:
            cout << "\nEnter Scalar to add in a matrix: ";
            cin >> num;
            m.scalarAddMat(num);
            break;

        case 4:
            cout << "\nEnter Scalar to subtract from a matrix: ";
            cin >> num;
            m.scalarSubMat(num);
            break;

        case 5:
            cout << "\nEnter Scalar to multiply with a matrix: ";
            cin >> num;
            m.scalarMultMat(num);
            break;

        case 6:
            cout << "\nEnter Scalar to divide a matrix: ";
            cin >> num;
            m.scalarDivMat(num);
            break;

        case 7:
            if (r != c)
                cout << "Matrix is not a square matrix!\n";
            else
                m.checkIdentityMatrix(flag);
            break;

        case 8:
            if (r != c)
                cout << "Matrix is not a square matrix!\n";
            else
                m.checkSymmetricMat(flag);
            break;

        case 9:
            m.checkNullMatrix(flag);
            break;

        case 10:
            cout << "\nEnter Row: ";
            cin >> r;
            cout << "Enter Column: ";
            cin >> c;
            if (!((r > 0 && r < 6) && (c > 0 && c < 6)))
                cout << "\nOrder is Invalid\n\n";
            else
            {
                m.assignMatrixOrder(r, c);
                cout << "\nEnter 1st Matrix Values: \n";
                m.getMatVal1(r, c);
                cout << "\nEnter 2nd Matrix Values: \n";
                m.getMatVal2(r, c);
                m.addTwoMat();
                cout << "Sum is:\n";
                m.result();
                cout << endl;
            }
            break;

        case 11:
            cout << "\nEnter Row: ";
            cin >> r;
            cout << "Enter Column: ";
            cin >> c;
            if (!((r > 0 && r < 6) && (c > 0 && c < 6)))
                cout << "\nOrder is Invalid\n\n";
            else
            {
                m.assignMatrixOrder(r, c);
                cout << "\nEnter 1st Matrix Values: \n";
                m.getMatVal1(r, c);
                cout << "\nEnter 2nd Matrix Values: \n";
                m.getMatVal2(r, c);
                m.subTwoMat();
                cout << "Subtract is:\n";
                m.result();
                cout << endl;
            };
            break;

        case 12:
            cout << "Enter Rows of matrix A: ";
            cin >> r;
            cout << "Enter Columns of matrix A: ";
            cin >> c;
            cout << "Enter Rows of matrix B: ";
            cin >> r1;
            cout << "Enter Columns of matrix B: ";
            cin >> c1;
            if (c != r1)
                cout << "Matrices cannot be Multiplyed!!!\n";
            else
            {
                m.assignMatrixOrder(r, c);
                cout << "Enter Elements of Matrix A:\n";
                m.getMatVal1(r, c);
                m.assignMatrixOrderA(r1, c1);
                cout << "Enter Elements of Matrix B:\n";
                m.getMatVal2(r1, c1);
                m.mulTwoMat();
            }
            break;

        case 0:
            cout << "\n\n\nProgram Ended!!!";
            break;

        default:
            cout << "\nInvalid Command!!!";
            break;
        }
    }
    return 0;
}
