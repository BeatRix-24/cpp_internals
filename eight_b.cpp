
#include <bits/stdc++.h>
#define MAX 80
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
class test : virtual public Student  {
    protected:
        int marks[2] ;
    public:
        void getTestMarks(){
            
            cout << "Enter the marks  ";
            for (int i = 0; i < 2; i++)
            {
                cin >> marks[i];
            }
            cout << endl;
        }
        void displayTestMarks(){
            
            for (int i = 0; i < 2; i++)
            {
                cout << "Marks in sub"<<i+1<<" is = "<<marks[i]<<endl;
            }
        }

};
class sports : virtual public Student{
    protected:
        int  sportsScore;
    public:
        void getSportsMarks(){
            cout << "Enter sports marks"<<endl;
            cin >> sportsScore;
        }
        void displaySportsScore(){
            cout << "Sports Score : "<<sportsScore<<endl;
        }
};
class result :  public test, public sports{
    protected:
        int totalMarks;
    public:
        
        void calculateResult(){
             totalMarks = marks[0]+marks[1] + sportsScore;
        }
        void displayInfo(){
            displayStudentInfo();
            displayTestMarks();
            displaySportsScore();
            calculateResult();
            

            cout << "Total marks " << totalMarks << endl;
        }
};
int main() {
    // Your C++ code here
    result r;
    r.getStudentInfo();
    r.getTestMarks();;
    r.displayInfo();
    return 0;
}