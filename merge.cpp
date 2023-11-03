#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void merge(int array1[], int array2[], int n, int m, int array3[])
{
    int i = 0, j = 0, k = 0;
  //merging
    while (i < n)
    {
        array3[k++] = array1[i++];
    }
    while (j < m)
    {
        array3[k++] = array2[j++];
    } 
    //sorting 
    sort(array3, array3 + n + m);
}
int main()
{
    int a, b;
    cin >> a;
    int arr1[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }
    cin >> b;
    int arr2[b];
    for (int i = 0; i < b; i++)
    {
        cin >> arr2[i];
    }
    int arr3[a + b];
    merge(arr1, arr2, a, b, arr3);

    for (int i = 0; i < a + b; i++)
    {
        cout << arr3[i] << " ";
    }return 0;
}
