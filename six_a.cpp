#include <bits/stdc++.h>

using namespace std;
bool isTrue(int n){
    int reverse = 0;
    int og = n;
    while (n>0)
    {
        int digit = n%10;
        reverse = reverse * 10 +digit;
        n/=10;
    }
    return (og == reverse);
}
int main() {
    // Your C++ code    here
    int n;
    cout << "Enter the number to find wheather it is palindrome or not"<<endl;
    cin >> n;
    bool result = isTrue(n);
    if (result) {
        cout << "Given number is palindrome"<<endl;
    } else {
        cout << "Given number is not a palindrome number"<<endl;
    } 
    return 0;
}