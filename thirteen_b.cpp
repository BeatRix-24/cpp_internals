#include <bits/stdc++.h>
#define MAX 50
using namespace std;
class Student {
    protected:
        char name[MAX] ;
        char USN [10] ;
    public:
        void getStudentInfo(){
            cout <<"Enter the name of the student "<<endl;
            cin >> name;
            cout << "Enter USN "<<endl;
            cin >> USN;
        }
        void displayStudentInfo(){
            cout << setw(10) << name << "\t" <<USN <<endl;
        }

};
class test :  public Student  {
    protected:
        int marks[2] ;
    public:
        void getInfo(){
            getStudentInfo();
            cout << "Enter the marks  ";
            for (int i = 0; i < 2; i++)
            {
                cin >> marks[i];
            }
            cout << endl;
        }
        void displayInfo(){
            displayStudentInfo();
            for (int i = 0; i < 2; i++)
            {
                cout << "Marks in sub"<<i+1<<" is = "<<marks[i]<<endl;
            }
        }
};

int main() {
    // Your C++ code here
    test data[10];
    int i = 0;
    char option ;
    do
    {
        data[i].getInfo();
        i++;
        cout << "Do you want to continue (y/n) : ";
        cin >> option;
    } while (option != 'n');
    for (int j = 0; j < i; j++)
    {
        data[i].displayInfo();
    }
    
    return 0;
}