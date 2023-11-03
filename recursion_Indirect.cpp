// Write a program to print numbers from 1 to 10 in such a way that when number is odd, add 1 and when number is even ,subtract 1....
// OUTPUT:- 2 1 4 3 6 5 8 7 10 9

#include <iostream>
using namespace std;
int n = 1;
void odd();
void even();
int main()
{
    odd();
    return 0;
}
void odd()
{
    if (n <= 10)
    {
        cout << n + 1 << endl;
        n++;
        even();
    }
    return;
}
void even()
{
    if (n <= 10)
    {
        cout << n - 1 << endl;
        n++;
        odd();
    }
    return;
}