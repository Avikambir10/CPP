#include<iostream>
//function calling itself
using namespace std;
/* int Sum(int n){
    if (n == 0){
        return 0;
    }
    int prevsum = Sum(n-1);
    return n + prevsum;
}
int main() {
    int n;
    cin >> n;
    cout << Sum(n) ;
    return 0;
} */

/* int power( int n, int p){
    if (p==0)
    {
        return 1;
    }
    
    int prevpower = power(n,p-1);
    return n * prevpower;
}
int main() {
    int n , p;
    cin >> n >> p;
    cout << power(n,p);
    return 0;
}
 */

//factorial
int fact (int n) {
    if (n == 0){
        return 1;
    }
    int prevfact = fact(n-1);
    return n * prevfact;

    
}
int main() {
    int n ;
    cin >> n;
    cout << fact(n);
    return 0;
}