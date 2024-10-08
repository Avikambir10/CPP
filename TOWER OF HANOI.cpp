// TOWER OF HANOI>>>>
#include <iostream>
using namespace std;
void towerofHANOI(int n, char source, char helper, char destinaton)
{
    if (n == 0){
       return;
    }
    towerofHANOI(n - 1, source, destinaton, helper);
    cout << "Move from " << source << " to " << destinaton << "\n";
    towerofHANOI(n - 1, destination, helper, source);

}
int main()
{
    int n;
    cin >> n;
    towerofHANOI(n, 'A', 'B', 'C');
    cout <<  "\nNumber of Moves =" << (n*n)-1 ;
    return 0;
}
