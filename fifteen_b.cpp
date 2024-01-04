#include <bits/stdc++.h>

using namespace std;

class Counter {
    private:
        int var;
    public:
        Counter(){
            var = 0;
        }
        Counter(int i ){
            var = i;
        }
        void display(){
            cout << "Variable = " <<var << endl;
        }
        Counter operator --(){
            Counter temp ;
            temp.var=--var;
            return temp;
        }
        Counter operator --(int){
            Counter temp;
            temp.var = var--;
            return temp;
        }
};

int main() {
    // Your C++ code here
    Counter c1(5),c2(6),c3;
    cout << "c3 is is intialised to 0 (Default constructor) and c1 = 5, c2 = 6 "<<endl;
    cout <<"c1 is post decremented and stored in c3 "<<endl;
    c3 = c1--;
    cout << "c3 = "; 
    c3.display();
    cout << endl;
    cout << "c2 is pre decremented and stored in c3 "<<endl;
    c3 = --c2;
    cout << "c3 = "; 
    c3.display();
    cout << endl;
    return 0;
}
