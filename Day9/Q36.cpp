#include <iostream>
using namespace std;

/* Write a program to Print hollow square
pattern.
*****
*   *
*   *
*   *
*****    */
void hollow_sq() {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"*";           //first column
        
        for(int j=1; j<=n-1; j++){      //for centre hollow space
            if(i==1 || i==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }

        cout<<"*"<<endl;     //last column
    }
}

int main() {
    hollow_sq();
    return 0;
}