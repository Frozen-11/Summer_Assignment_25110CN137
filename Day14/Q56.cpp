#include <iostream>
using namespace std;

void findDuplicates(int arr[], int n)
{
    int freq[100] = {0};  //initialising elements with 0

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(int i=0; i<100; i++){
        if(freq[i] > 1){
            cout<<i<<" ";
        }
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
    findDuplicates(arr, n);
    return 0;
}