#include <iostream>
using namespace std;
const int MAX=5;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance()
    {
        feet=0;
        inches=0.0;
    }
    Distance(int f,float i)
    {
        feet=f;
        inches=i;
    }
    bool operator <(Distance x)
    {
        float m=(feet*12)+inches;
        float n=(x.feet*12)+x.inches;
        if(m<n)
            return 1;
        else
            return 0;
    }

    Distance operator += (Distance x)
    {
        Distance temp;
        temp.feet=feet+x.feet;
        temp.inches=inches+x.inches;
        if(temp.inches>=12)
        {
            temp.feet+=1;
            temp.inches-=12;
        }
        return temp;
    }
    void display()
    {
        cout<<feet<<" feet and "<<inches<<" inches"<<endl;
    }
};

int main()
{
    Distance d1(9,1),d2(9,2),d3;
    d1.display();d2.display();d3.display();
    int r= d1<d2;
    cout<<r<<endl;
    if(r==1)
        cout<<"d1 is lesser than d2"<<endl;
    else
        cout<<"d2 is lesser than d1"<<endl;
    d3= d1+=d2;
    d3.display();
    return 0;
}