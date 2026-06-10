#include <iostream>
using namespace std;
/*Write a program to Print character pyramid
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA */

void char_pyr() {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<= n-i; j++){
            cout<<" ";
        }
        char k='A';
        for(int j=1; j<=i; j++){
            cout<<k;
            k++;
        }
        
        for(char p='A'+i-2; p>='A'; p--){
            
            cout<<p;
            
        }
        cout<<endl;
    }
}
int main() {
    char_pyr();
    return 0;
}


