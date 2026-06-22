#include <iostream>
using namespace std;
//54. Write a program to Frequency of an element
int freq(int arr[],int n,int key){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter element: ";
    cin>>key;

    cout<<"Frequency of "<<key<<" = "<<freq(arr,n,key);
    return 0;

}