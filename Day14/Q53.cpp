#include <iostream>
using namespace std;
//53. Write a program to Linear search

int linear_search(int arr[],int n,int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;   //terminating execution, returning control to the calling function
    
}
int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key: ";
    cin>>key;
    int result = linear_search(arr,n,key);
    if(result == -1){
        cout<<key<<" Element not found";
    }
    else{
        cout<<key<<" element is found at index "<<result;
    }

    return 0;
}
