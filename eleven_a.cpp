#include <bits/stdc++.h>
#define MAX 30
using namespace std;

class bank_acct {
    protected:
        char cust_name[MAX];
        char cust_accno[MAX];
        int balance ;
    public:
        void read_details (){
            cout << "Enter the customer name : ";
            cin >> cust_name;
            cout << "Enter account number : ";
            cin >> cust_accno;
            cout << "Enter the balance ";
            cin >> balance;
        }
        void display_details(){
            cout << "Name : "<<cust_name<<", Account number : "<< cust_accno<<endl;
        }
        void display_balance(){
            cout << "Balance : "<<balance;
        }
        inline void deposit (){
            int n ;
            cout << "Enter deposit amount : ";
            cin >> n;
            balance += n;
        }
        inline void withdraw(){
            int n ;
            cout << "Enter withdraw amount : ";
            cin >> n;
            if(n>balance){
                cout << "Low Balance "<<endl;
            }else{
                balance -= n;
            }
        }
        void searcAcc (char AccNum[], char option){
            if(!strcmp(cust_accno,AccNum)){
                if(option=='d'){
                    deposit();
                }else   
                    withdraw();

                display_balance();
            }
        }
};

int main() {
    // Your C++ code here
    bank_acct b[10];
    char val ;
    char AccNum[MAX];
    char option;
    int i = 0;
    do
    {
        b[i].read_details();
        i++;
        cout << "Do you want to continue (y/n)"<<endl;
        cin >> val;
    } while (val != 'n' && i <= 10);
    
    cout<<"Enter account number for transection : \t";
    cin >> AccNum;
    cout << "choose type of transection withdraw(w)/diposit(d) \t";
    cin >> option;
    for (int j = 0; j < i; j++)
    {
        b[j].searcAcc(AccNum,option);
    }
    
    return 0;
}