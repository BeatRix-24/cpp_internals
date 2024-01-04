#include <bits/stdc++.h>
#define MAX  80
using namespace std;

class String{
    private:
        char input[MAX];
    public:
        String(){
            input[0] = '\0';
        }
        String(char data[]){
            strcpy(input,data);
        }
       
        String strconcat(String s1){
            String temp ;
            if (strlen(input)+strlen(s1.input)<MAX)
            {
                strcpy(temp.input,input);
                strcat(temp.input,s1.input);
            }
            return temp;
        }
        void display (){
            cout << "The String is : "<< input << endl;
        }  
};

int main() {
    // Your C++ code here
    String s1, s2("hello"), s3("world"), s4(s2);
    s1.display();
    s2.display();
    s3.display();
    s1 = s2.strconcat(s3);
    s1.display();
    s4.display();
    return 0;
}