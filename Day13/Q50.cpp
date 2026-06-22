#include <iostream>
using namespace std;
//50. Write a program to Find sum and average of array
int sum_arr(int arr[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

double avg_arr(int arr[],int n){
    double average;
    int sum = sum_arr(arr,n);
    
    average = (double)sum/n;
    return average;
    
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Sum = "<<sum_arr(arr,n)<<endl;
    cout<<"Average = "<<avg_arr(arr,n)<<endl;
    return 0;
}