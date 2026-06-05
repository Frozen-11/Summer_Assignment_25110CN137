#include <iostream>
using namespace std;

//24. Write a program to Find x^n without pow()
void exponent() {
    int x,n;
    long long ans = 1;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Enter it's power: ";
    cin>>n;
    
    
    for( int i=1; i<=n; i++){
        ans = ans * x;
    }

    cout<<"Result = "<<ans<<endl;
}

int main() {
    exponent();
    return 0;
}
