#include<iostream>
using namespace std;
int main() {
    int n,m;
    cout << "enter size of array";
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Matrix is :-\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    int x;
    cout << "enter element to be searched:-" << endl;
    cin >> x;
    bool flag = false;  
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x){
                flag = true;
            }
        }
    }
    if (flag){
        cout << "Element is found";

    }else{
        cout << "Element is not found";
    }

    return 0;
}