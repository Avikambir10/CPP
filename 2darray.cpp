/* You're given an N x M matrix where each row and column is sorted in ascending order. Your task is to determine if a given number x is present in the matrix.


Input Format:
-The first line contains two space-separated integers, N and M, denoting the number of elements in a row and column, respectively.
-The second line of each test case contains N * M space-separated integers representing the elements in the matrix in row-major order.
-The third line of each test case contains a single integer x, which is the element to be searched within the matrix.

Output Format:
Print 1 if the element is present in the matrix, else 0. */











#include <iostream>
#include <vector>

using namespace std;

int findNum(vector<vector<int>> &arr, int x)
{
    int a = arr.size();
    int b = arr[0].size();

    if (a == 0)
    {
        return 0;
    }

    int i = 0;
    int j = b - 1; /// start from topright corner..

    while (i < a && j >= 0)
    {
        if (arr[i][j] == x)
        {
            return 1;
        }
        else if (arr[i][j] > x)
        {
            j--; // Move left in the current row
        }
        else
        {
            i++; // Move down to the next row
        }
    }
    return 0;
}

int main()
{
    int m, n;
    cout << "Enter size of 2D array (m n): ";
    cin >> m >> n;

    vector<vector<int>> arr(m, vector<int>(n));
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x;
    cout << "Enter element to be found: ";
    cin >> x;

    int res = findNum(arr, x);

    cout << res;

    return 0;
}
