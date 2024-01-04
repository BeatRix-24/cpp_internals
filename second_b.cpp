/* Write a C++ program to create a base class called Shape. Use this class to store two 
double type values that could be used to compute the area of figures. Derive two specific 
classes called triangle and rectangle from the base Shape. Add to the base class, a member 
function get_data ( ) to initialize base class data members and another member function 
display_area () 
to compute and display the area of the figures. Make display_area () as a virtual 
function and redefine this function in derived classes to suit their requirements. */

#include <bits/stdc++.h>

using namespace std;
class Shape {
    protected:
        double val1 = 0; 
        double val2 = 0;
    public:
    
        virtual void display_area() = 0;
        void  get_data(){
            cout << "Enter the first value" << endl;
            cin >> val1;

            cout << "Enter the second value" << endl;
            cin >> val2;  
        }
        
};
class triangle : public Shape {
    public:
        void display_area(){
            double a = 0.5 *val1 * val2; 
            cout << "Area of triangle is " << a << endl;
        }
};
class rectangle : public Shape{
    public:
        void display_area(){
            if(val1 == val2){
                double a = val1*val1;
                cout << "Area of the square "<<a<<endl;
            }
            else{
                double a = val1*val2;
                cout << "Area of the rectangle is "<< a << endl;
            }
        }
};
int main() {
    // Your C++ code here

    triangle t;
    rectangle r;

    t.get_data();
    t.display_area();

    r.get_data();
    r.display_area();


    return 0;
}