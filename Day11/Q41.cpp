#include <iostream>
using namespace std;
//41. Write a program to Write function to find sum of two numbers
int sum(int a, int b){
    return a+b;
}
int main() {
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    cout<<sum(a,b);
    return 0;
}