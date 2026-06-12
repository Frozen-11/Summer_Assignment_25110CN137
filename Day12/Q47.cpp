#include <iostream>
using namespace std;
//47. Write a program to Write function for Fibonacci
void fibonacci(int n){
    int x=0,y=1,sum;
    for(int i=1; i<=n; i++){
        cout<<x<<" ";

        sum = x + y;
        x = y;
        y = sum;
    }
}
int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;

    fibonacci(n);
    return 0;
} 
