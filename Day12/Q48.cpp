#include <iostream>
using namespace std;
//48. Write a program to Write function for perfect number
bool isPerfect(int n){
    int sum = 0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    return sum == n;
}
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isPerfect(n)){
        cout<<n<<" is a Perfect number";
    }
    else{
        cout<<n<<" is not a Perfect number";
    }
    return 0;

}