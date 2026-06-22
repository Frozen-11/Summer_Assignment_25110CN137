#include <iostream>
using namespace std;
//49. Write a program to Input and display array

int input_arr(int n, int arr[]) {
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int display_arr(int n, int arr[]) {
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    input_arr(n,arr);
    display_arr(n,arr);
    return 0;
}