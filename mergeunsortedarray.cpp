#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void mergesort(int arr1[], int arr2[], int res[], int n, int m)
{
    int i = 0, j = 0, k = 0;
    while (i < m)
    {
        res[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n)
    {
        res[k] = arr2[j];
        j++;
        k++;
    }
    sort(res, res + m + n);

    cout << "Sorted Merge list: ";
    for (int s = 0; s < m + n; s++)
    {
        cout << " " << res[s];
    }
}

int main()
{
    int m, n;
    cout << "Enter size of 1st array : " << endl;
    cin >> m;
    cout << "Enter size of 2nd array : " << endl;
    cin >> n;

    int arr1[m];
    cout << "enter first array containing " << m << " elements";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    int arr2[n];
    cout << "enter first array containing " << n << " elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int res[m + n];

    mergesort(arr1, arr2, res, n, m);
    return 0;
}