// Given an integer x, return true if x is a palindrome, and false otherwise.

#include <iostream>
using namespace std;
bool isPalindrome(int x)
{
    if (x < 0 || (x != 0 && x % 10 == 0))  //for handling negative and numbers ending with zero
    {
        return false;
    }
    int rev = 0;
    int org = x;
    while (x > 0)
    {
        // Build the reversed number
        rev = rev * 10 + x % 10;
        x = x / 10;
    }
    // Check if the original number is equal to the reversed number
    return org == rev;
}

int main()
{
    int x;
    cin >> x;

    bool result = isPalindrome(x);
    cout << boolalpha << result; //boolalpha

    return 0;
}