#include <bits/stdc++.h>
using namespace std;

class TIME {
private:
    int hours;
    int mins;
    int secs;

public:
    TIME() {
        hours = 0;
        mins = 0;
        secs = 0;
    }
    TIME(int x, int y, int z) {
        hours = x;
        mins = y;
        secs = z;
    }
    void display() {
        cout << hours << ':' << mins << ':' << secs << endl;
    }
    void add(TIME a, TIME b) {
        this->hours = a.hours + b.hours;
        this->mins = a.mins + b.mins;
        this->secs = a.secs + b.secs;
        if (this->secs > 60) {
            this->mins += 1;
            this->secs -= 60;
        }
        if (this->mins > 60) {
            this->hours += 1;
            this->mins -= 60;
        }
    }
};

int main() {
    TIME t1(11, 59, 59);
    TIME t2(1, 10, 12);
    TIME t3;
    t3.add(t1, t2);
    t3.display();
    return 0;
}
