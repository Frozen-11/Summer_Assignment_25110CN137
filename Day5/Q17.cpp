#include <iostream>
using namespace std;

//17. Write a program to Check perfect number
void check_perfect() {
    int n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<n; i++){
        if(n%i==0){
            sum = sum + i;
        }
        
    }
    if(sum == n){
        cout<<n<<" is a perfect number"<<endl;
    }
    else{
        cout<<n<<" is not a perfect number"<<endl;
    }
}


int main() {
    check_perfect();
    return 0;
}