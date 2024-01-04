#include <bits/stdc++.h>

using namespace std;
bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int main() {
    // Your C++ code here
    int n;
    cout << "Enter the number to check wheather given number is prime or not"<<endl;
    cin >> n;
    if(isPrime(n)){
        cout << "It is a prime number"<<endl;
    }else{
        cout << "Its not a prime number"<<endl;
    }
    return 0;
}