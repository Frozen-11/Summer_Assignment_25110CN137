#include <iostream>
using namespace std;

//43. Write a program to Write function to check prime
int check_prime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2; i<n; i++){
        if (n%i==0){
            return 0;
        }

    }
    return 1;
}
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result= check_prime(n);
    if(result==1){
        cout<<n<<" is a Prime number";
    }
    else{
        cout<<n<<" is not a Prime number";
    }
    return 0;

}