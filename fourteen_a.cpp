#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your C++ code here
    string input;
    cout << "Enter data : ";
    cin >> input;
    int wc = 0;
    int cc = 0;
    int sc = 0;
    int i = 0;
    while (input[i]!='\0')
    {
        cc++;
        if (input[i]==' '||input[i]=='\t'||input[i]=='/n')
        {
            sc++;
        }
        i++;
    }
    wc = sc + 1;

    cout << "Number of characterstics : "<<cc<<endl;
    cout << "Number of words : "<<wc << endl;
    cout << "Number of spaces : "<< sc << endl;

    return 0;
}