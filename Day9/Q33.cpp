#include <iostream>
using namespace std;
/*Write a program to Print reverse star pattern.
*****
****
***
**
*    */
void rev_star(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
     for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}

int main() {
    rev_star();
    return 0;
}