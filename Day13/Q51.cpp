#include <iostream>
using namespace std;
//51. Write a program to Find largest and smallest element
int largest(int arr[],int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
        max = arr[i];
    }
    }
    return max;
}

int smallest(int arr[],int n){
    int min = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }

    }
    return min;
}

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Largest element in array = "<<largest(arr,n)<<endl;
    cout<<"Smallest element in array = "<<smallest(arr,n)<<endl;
    return 0;

}