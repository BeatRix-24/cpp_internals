#include <bits/stdc++.h>

using namespace std;

class dist{
    private:
        float feet;
        float inches;
    public:
        dist(){
            feet = 0;
            inches = 0;
        }
        dist(float ft,float in ){
            feet = ft;
            inches = in;
        }
        dist operator + (dist x){
            dist temp;
            temp.feet = feet + x.feet;
            temp.inches = inches + x.inches;
            if (temp.inches>=12)
            {
                temp.feet += 1;
                temp.inches -= 12;
            }
            return temp;
        }
        void display(){
            cout << "Feet : "<<feet<<", inches : "<<inches<<endl;
        }
};

int main() {
    // Your C++ code here
    dist d1(5,5.5),d2(6,6.5),d3;

        d3 = d1 + d2;
    cout << "Distance after adding : ";
    d3.display();
    return 0;
}