#include <iostream>
using namespace std;

/*Write a program to Print reverse pyramid.
*********
 *******
  *****
   ***
    *       */

    void rev_pyramid(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=n; i>=1; i--){
        for(int j=1; j<= n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<= 2*i - 1; j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
 

int main() {
    rev_pyramid();
    return 0;
}
