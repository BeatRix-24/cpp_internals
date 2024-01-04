#include <bits/stdc++.h>
#define MAX 50
using namespace std;

class student {
    protected:
        string name;
        char grade;
        int rollNo;
        int sub1,sub2,sub3;
    public:
        student(){
            name = '\0';
            grade = '\0';
            rollNo = 0;
            sub1 = sub2 = sub3 = 0;
        }
        void getInfo(){
            cout << "Enter name : ";
            cin >> name;
            cout << "Enter Roll Number : ";
            cin >> rollNo;
            cout << "Enter marks in Subject 1 :\t";
            cin >> sub1;
            cout << "Enter marks in Subject 2 :\t";
            cin >> sub2;
            cout << "Enter marks in Subject 3 :\t";
            cin >> sub3;        
        }
        void calculateGrade(){
            float avg = (sub1 + sub2 + sub3)/3;
            if (avg >90 && avg <= 100){
                grade = 'O';
            }else if(avg >80 && avg <= 90){
                grade = 'A';
            }else if(avg >70 && avg <= 80){
                grade = 'B';
            }else if(avg >60 && avg <= 70){
                grade = 'C';
            }else if(avg >50 && avg <= 60){
                grade = 'D';
            }else if(avg >40 && avg <= 50){
                grade = 'E';
            }else {
                grade = 'F';
            }
        }
        void displayInfo(){
            calculateGrade();
            cout << "Name : "<<name<<endl;
            cout <<"Roll Number : "<<rollNo<<endl;
            cout <<"Marks in subject 1 : "<< sub1 << endl;
            cout <<"Marks in subject 2 : "<< sub2 << endl;
            cout <<"Marks in subject 3 : "<< sub3 << endl;
            cout <<"Grade : "<<grade<<endl;
        }
};

int main() {
    // Your C++ code here
    student s[10];
    int i = 0;
    char option;
    do
    {
        s[i].getInfo();
        i++;
        cout << "Do you want to continue (y/n)"<<endl;
        cin >> option;
    } while (option == 'n');
    for(int j =0 ; j<i; j++){
        s[j].displayInfo();
    }
    return 0;
}
