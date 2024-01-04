#include <bits/stdc++.h>

using namespace std;

float area (float radius){
    return 3.14*radius*radius;
}

float circum(float radius){
    return 2*3.14*radius;
}

int main() {
    // Your C++ code here
    float radius = 0;
    cout << "Enter the radius " << endl;
    cin >> radius;

    cout << "The area of the circle " << area(radius) << endl;
    cout << "The circumferance of the circle "<< circum(radius)<< endl; 

    return 0;
}