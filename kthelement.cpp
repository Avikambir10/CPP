/*  You are given N integers, your task is to find kth largest element in the array 

Input Format:
First Line: an integer N denoting the number of elements in array and integer K determine Kth greatest element

Second Line: N space separated integers.

Output Format:
Kth largest element */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());

    cout << "Kth largest element: " << arr[k] << endl;

    return 0;
}






