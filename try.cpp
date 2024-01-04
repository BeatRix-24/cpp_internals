#include <bits/stdc++.h>

using namespace std;
class Shape

{

protected:
    float par1;

    float par2;

public:
    virtual void area() = 0;

    void getData()

    {

        cout << "Enter the first parameter of the shape: ";

        cin >> par1;

        cout << "Enter the second parameter of the shape: ";

        cin >> par2;
    }
};

class triangle : public Shape

{

public:
    void area()

    {

        float a = 0.5 * par1 * par2;

        cout << "Area of the triangle is: " << a << endl;
    }
};

class rectangle : public Shape

{

public:
    void area()

    {

        float a = par1 * par2;

        if (par1 == par2)

        {

            cout << "Area of the square: " << a << endl;
        }

        else

        {

            cout << "Area of the rectangle: " << a << endl;
        }
    }
};

class circle : public Shape

{

public:
    void area()

    {

        float a = 3.1428 * par1 * par2;

        cout << "Area of the circle: " << a << endl;
    }
};

int main()

{

    Shape *bptr;

    triangle t;
    rectangle r;
    circle c;

    cout << "USN:	Name:	" << endl;

    cout << "object t of class triangle is called and initialized with parameters" << endl;

    t.getData();

    bptr = &t;

    cout << "pointer points to corresponding member function of that particular object" << endl;

    bptr->area();

    cout << endl;

    cout << "object r of class rectangle is called and initialized with parameters" << endl;

    r.getData();

    bptr = &r;

    cout << "pointer points to corresponding member function of that particular object" << endl;

    bptr->area();

    cout << endl;

    cout << "object c of class circle is called and initialized with parameters" << endl;

    t.getData();

    bptr = &t;

    cout << "pointer points to corresponding member function of that particular object" << endl;

    bptr->area();

    cout << endl;

    return 0;
}