#include <bits/stdc++.h>
#define MAX 50
using namespace std;
int strlength(char str[]){
    int i = 0;
    while (str[i] !='\0')
    {
        i++;
    }
    return i;
}
void strcopy(char dest[], char src[]){
    int  i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
}
int main() {
    // Your C++ code here
    char str1[MAX];
    char str2[MAX];

    cout << "Enter the string : ";
    cin >> str1;
    
    cout << "Length of string : "<<strlength(str1);
    strcopy(str2,str1);
    cout << "Original string : "<<str1<<"\nCopied string : "<<str2;

    return 0;
}