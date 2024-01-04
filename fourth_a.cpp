#include <bits/stdc++.h>
#define MAX 50
using namespace std;

int main() {
    // Your C++ code here
    char name[MAX];
    int age = 0;
    int salary = 0;
    int n;
    cout << "Enter the name of the person :\t";
    cin >> name;
    cout << "Age :\t";
    cin >> age;
    cout << "Salary :\t";
    cin >> salary;

    cout << "Name : " <<  name << " Age : "<< age << " Salary : "<<salary<<endl;
    return 0;
}