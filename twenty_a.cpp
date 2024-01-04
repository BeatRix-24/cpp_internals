#include<iostream>
using namespace std;
const int MAX=5;
class stack {
private:
 int arr[MAX];
 int top;
public:
 stack();
 void operator +(int item);
 int operator -();
};
//initialize data member
stack::stack() {
 top=-1;
}
//adds an element to the stack
void stack::operator +(int item) {
 if(top==MAX-1)
{
 cout<<"Stack is Full"<<endl;
 return;
}
 top++;
 arr[top]=item; }
//extracts an element
int stack::operator -() {
 if(top==-1)
{
 cout<<endl<<"Stack is Empty:";
 return 0;
}
 int data=arr[top];
 top--;
 return data; }
int main() {
 stack s;
 s+11;
 s+12;
 s+13;
 s+14;
 s+15;
 s+16;
 s+16;
 int i=-s;
 cout<<"\n\nItem Poped:"<<i<<endl;
 cout<<-s<<endl;
 cout<<-s<<endl;
 cout<<-s<<endl;
 cout<<-s<<endl;
 cout<<-s<<endl;
 cout<<-s<<endl;
}