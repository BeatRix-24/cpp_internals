#include <bits/stdc++.h>

using namespace std;

float calculateAverage(float *arr, int size){
    float sum = 0;
    float *ptr = arr;
    for (int i = 0; i < size; i++)
    {
        sum += *ptr;
        ptr++;
    }
    return (sum/size);
}

int main() {
    // Your C++ code here
    float arr[10]={1,2,3,4,5,6,7,8,9,10};
    float average = calculateAverage(arr,10);
    cout << average<<endl;
    return 0;
}