#include <bits/stdc++.h>

using namespace std;

double areaOfTriangle (int s1,int s2,int s3){
    double s = (s1+s2+s3)/2;
    double area = sqrt((s*(s-s1)*(s-s2)*(s-s3)));
    return area;
}
int main() {
    // Your C++ code here
    int a = 0, b = 0, c = 0;
    cout << "Enter the three sides of the triangle "<<endl;
    cin >> a >> b >> c;
    cout << "Area of this triangle is "<<areaOfTriangle(a,b,c)<<endl;

    return 0;
}