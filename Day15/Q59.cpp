#include <iostream>
using namespace std;

//59. Write a program to Rotate array right
void rightRotate(int arr[], int n){
    int last = arr[n-1];

    for(int i= n-1; i>0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    rightRotate(arr, n);
    return 0;
}