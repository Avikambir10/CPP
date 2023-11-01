//Reverse A string using recursion..
#include <iostream>
#include<string.h>
using namespace std;
void reverse(string s);
int main(){
    string str;
    getline(cin,str);
    reverse(str);
    return 0;
}
void reverse (string s){
    if (s.length() == 0){
            return;
    }
    string ros  = s.substr(1);
    reverse(ros);
    cout << s[0];
}
