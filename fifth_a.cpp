#include <bits/stdc++.h>

using namespace std;

long long factorial (int n){
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main() {
    // Your C++ code here
    int n = 0;
    cout << "Enter the number :\t";
    cin >> n;
    long long output = factorial(n);
    cout << "Factoral of "<<n<<" is "<<output<<endl;
    return 0;
}