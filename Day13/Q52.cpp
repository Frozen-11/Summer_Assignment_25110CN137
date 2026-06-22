#include <iostream>
using namespace std;
//52. Write a program to Count even and odd elements
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    int even = 0, odd=0;
    

    for(int i=0; i<n; i++){
        cin>>arr[i];
        
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    cout<<"No. of Even elements = "<<even<<endl;
    cout<<"No. of Odd elements = "<<odd<<endl;
    return 0;
} 
