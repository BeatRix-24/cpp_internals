#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your C++ code here
    
    float p = 0, r = 0, t = 0;
    cout << "Enter principle ammount " << endl;
    cin >> p;
    cout << "Enter rate "<<endl;
    cin >> r;
    cout << "Enter the time period"<<endl;
    cin >> t;
    float si = (p*r*t)/100;
    cout << "Simple interest = " << si <<endl;

    return 0;
}