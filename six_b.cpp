#include <bits/stdc++.h>
#define MAX 5
using namespace std;
class Queue {
    protected:
        int arr[MAX];
        int rear, front;
    public:
    Queue(){
            rear = -1;
            front = -1;
        }
    void addq(int n){
        if(rear == MAX-1){
            cout << "Queue is full"<<endl;
            return; 
        }
        rear++;
        arr[rear] = n;
        if(front == -1){
            front = 0;
        }
    }
    int delq (){
        if(front==-1){
            cout <<"Queue is empty";
            return NULL;
        }
        int data = arr[front];
        arr[front] = 0;
        if(front==rear){
            front = rear = -1;
        }else{
            front++;
        }
        return data;
    }

};
int main() {
    // Your C++ code here
    Queue a;
    a.addq(10);
    a.addq(20);
    a.addq(30);
    a.addq(40);
    a.addq(50);
    a.addq(60);
    a.addq(70);
    cout << "Item deleted "<< a.delq()<<endl;
    cout << "Item deleted "<< a.delq()<<endl;
    cout << "Item deleted "<< a.delq()<<endl;
    cout << "Item deleted "<< a.delq()<<endl;
    cout << "Item deleted "<< a.delq()<<endl;
    cout << "Item deleted "<< a.delq()<<endl;
    cout << "Item deleted "<< a.delq()<<endl;
    return 0;
}