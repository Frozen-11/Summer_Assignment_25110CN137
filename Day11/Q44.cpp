#include <iostream>
using namespace std;

//44. Write a program to Write function to find factorial
int fact(int n){
    int fact =1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int main () {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<fact(n);
    return 0;
}