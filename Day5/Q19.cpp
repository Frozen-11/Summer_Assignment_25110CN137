#include <iostream>
using namespace std;
//19. Write a program to Print factors of a number
void factor() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for( int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
} 

int main() {
    factor();
    return 0;
}