#include <iostream>
using namespace std;
//55. Write a program to Second largest element

int second_largest(int arr[], int n){
    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Second largest element = " << second_largest(arr, n);
    return 0;
} 