#include <iostream>
using namespace std;

/*Write a program to Print repeated character
pattern.
A
BB
CCC
DDDD
EEEEE*/
void rep_char(){
    int n;
    char x ='A';
    cout<<"Enter number of rows: ";
    cin>>n;
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<x<<" ";
            
        }
        x++;
        cout<<endl;
    }

}
int main() {
    rep_char();
    return 0;
}