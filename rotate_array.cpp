// Rotate an array k times.
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k, temp;
    cout << "Enter size of array = ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Rotate array ";
    cin >> k;
    for (j = 0; j < k; j++)
    {
        temp = arr[0];
        for (i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[i] = temp;
    }
    cout << "Rotated array is =";
    for (i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }

    return 0;
}
