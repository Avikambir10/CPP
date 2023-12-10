#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+ n ,greater <int>());
    int res = arr[1];

    cout << "2nd " << res ;
    return 0;
}