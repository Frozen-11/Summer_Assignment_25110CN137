#include <iostream>
using namespace std;
//60. Write a program to Move zeroes to end


void moveZeroes(int arr[], int n){
    int temp[100];        /*First storing all non-zero elements in temp[], 
                           then filling the remaining positions with 0  */
    int index=0;

    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            temp[index] = arr[i];
            index++;
        }
    }

    while(index<n){
        temp[index] = 0;
        index++;
    }

    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }
}

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    moveZeroes(arr, n);
    return 0;
}