#include <bits/stdc++.h>
#define MAX 5
using namespace std;
class Stack{
    protected:
        int arr[MAX];
        int top ;
    public:
        Stack(){
            top=-1;
        }
        void push(int n){
            if(top == MAX -1){
                cout << "Stack is full"<<endl;
                return;
            }
            top++;
            arr[top] = n;
        }
        int pop(){
            int data;
            if(top == -1){
                cout << "Stack is empty."<<endl;
                return NULL;
            }
            data = arr[top];
            top--;
            return data;
        }
};
int main() {
    // Your C++ code here
    Stack s;
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);

    cout << s.pop()<<endl;
    cout << s.pop()<<endl;
    cout << s.pop()<<endl;
    cout << s.pop()<<endl;
    cout << s.pop()<<endl;
    cout << s.pop()<<endl;
    cout << s.pop()<<endl;
    return 0;
}