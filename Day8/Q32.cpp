#include <iostream>
using namespace std;

/*32. Write a program to Print repeated-number
pattern.
1
22
333
4444
55555 */
void rep_num() {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main() {
    rep_num();
    return 0;
}
