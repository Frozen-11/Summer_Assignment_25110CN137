#include <iostream>
using namespace std;

/*31. Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE */

void char_tri() {
    int n;
    
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        char x='A';    //resetting
        for(int j=1; j<=i; j++){
            
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}
int main(){
    char_tri();
    return 0;
}