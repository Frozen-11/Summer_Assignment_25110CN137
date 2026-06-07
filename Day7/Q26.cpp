#include <iostream>
using namespace std;

//Q26. Write a program to Recursive Fibonacci
int fibonacci(int n){

    if(n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cout<<"Enter a n: ";
    cin>>n;
    
    for(int i=0; i<n; i++){
        cout<<fibonacci(i)<<" ";
    }

    return 0;
}