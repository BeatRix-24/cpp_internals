#include <bits/stdc++.h>

using namespace std;

void Swap (int &a, int &b){
    int temp = a;
    a = b;
    b= temp;
}

int main() {
    // Your C++ code here
    int val1, val2;
    cout << "Enter first number :\t";
    cin >> val1;
    cout << "Enter second number :\t";
    cin >> val2;

    cout << "Before swapping "<<endl;
    cout << " first number :\t"<<val1<<endl;
    cout << " second number :\t"<<val2<<endl;

    Swap(val1,val2);

    cout << "After swapping "<<endl;
    cout << " first number :\t"<<val1<<endl;
    cout << " second number :\t"<<val2<<endl;

    return 0;
}
