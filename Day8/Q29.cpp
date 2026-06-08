#include <iostream>
using namespace std;

//29. Write a program to Print half pyramid pattern
void half_pyramid(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}

int main() {
    half_pyramid();
    return 0;
}