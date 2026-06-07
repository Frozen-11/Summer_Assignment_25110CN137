#include <iostream>
using namespace std;

//25.Write a program to Recursive factorial
int fact(int n){
    if( n==0 || n==1){
        return 1;
    }

    return n*fact(n-1);

}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<fact(n);
    return 0;
}