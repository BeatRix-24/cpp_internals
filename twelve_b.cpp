#include <bits/stdc++.h>

using namespace std;

bool isPresent(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key){
             return true;
        }
    }
    return false;
}

int main() {
    // Your C++ code here
    int key;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Enter the element to search inside the array : ";
    cin >> key;
    if(isPresent(arr,10,key)){
        cout << "Element "<<key << " is present inside the array."<< endl;
    }else {
        cout << "Element "<<key<<" is not present inside the array."<<endl;
    }
    return 0;
}