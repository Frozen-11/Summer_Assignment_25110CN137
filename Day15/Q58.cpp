#include <iostream>
using namespace std;

//58. Write a program to Rotate array left
void leftRotate(int arr[], int n){
    int first = arr[0];

    for(int i=0; i<(n-1); i++){
        arr[i] = arr[i + 1];
    }

    arr[n-1] = first;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    leftRotate(arr, n);
    return 0;
}