#include <iostream>
using namespace std;
//61. Write a program to Find missing number in array

int findMissing(int arr[], int n){
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int total = (n+1) * (n+2)/2;

    return total - sum;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Missing Number = "<<findMissing(arr, n);

    return 0;
}