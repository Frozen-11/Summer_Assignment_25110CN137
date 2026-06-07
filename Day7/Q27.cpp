#include <iostream>
using namespace std;

//27.Write a program to Recursive sum of digits
int sum_dig(int n){
    if (n==0)     //base condition
    return 0;

    

    return (n%10) + sum_dig(n/10);
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    cout<<sum_dig(n);

    return 0;
}
    
        
    
