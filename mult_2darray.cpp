#include <iostream>
using namespace std;
int main()
{
    int row1, coulmn1, row2, coulmn2;
    cout << "enter size of first matrix";
    cin >> row1 >> coulmn1;
    int arr[row1][coulmn1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < coulmn1; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "enter size of second matrix";
    cin >> row2 >> coulmn2;
    int arr2[row2][coulmn2];
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < coulmn2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    // If the number of (columns) in the first matrix is not equal to the number of (rows) in the second matrix, then the matrices are incompatible for multiplication ....

    if (coulmn1 == row2)
    {
        int new1[row1][coulmn2];
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < coulmn2; j++)
            {
                new1[i][j] = 0;
                for (int k = 0; k < coulmn1; k++)
                {
                    new1[i][j] += arr[i][k] * arr2[k][j];
                }
            }
        }

        cout << "Matrix multiplication is :";
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < coulmn2; j++)
            {
                cout << new1[i][j] << " ";
            }
            cout << "\n"; 
        }
    }
    else
    {
        cout << "Matrix multiplication is not possible";
    }
  return 0;
}
