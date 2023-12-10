/*  You are given N integers, your task is to sort the array in decreasing order using priority_queue container. 

Input Format:
First Line: an integer N denoting the number of elements to sort
Second Line: N space separated integers.

Output Format:
N integers sorted in decreasing order 

Constraints:
1 <= N <=1000 */


#include <iostream>
#include <queue>
#include<bits/stdc++.h>
using namespace std;


/* int main() {
    int N;
    cin >> N;

    priority_queue<int> pq;     // ---> descending order
    // priority_queue<int, vector<int>, greater<int>> pq;    //--->Acsending order
    while (N--) {
        int num;
        cin >> num;
        pq.push(num);
    }

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}

 */

