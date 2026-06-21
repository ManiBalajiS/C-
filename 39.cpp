#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    if (n < 0) return false;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}
bool isPalindrome(string s) {
    string reversedStr = s;
    reverse(reversedStr.begin(), reversedStr.end());
    return s == reversedStr;
}

int main() {
    int num;
    string word;
    cout << "Enter an integer: ";
    cin >> num;
    if (isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;
    cout << "\nEnter a string: ";
    cin >> word;
    if (isPalindrome(word))
        cout << "\"" << word << "\" is a palindrome." << endl;
    else
        cout << "\"" << word << "\" is  not a palindrom."<<endl;
return 0;
}
