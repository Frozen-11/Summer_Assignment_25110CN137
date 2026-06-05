#include <iostream>
using namespace std;

//20. Write a program to Find largest prime factor

void prime_factor(){
    int n,largest;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2; i<=n; i++){
        while(n % i ==0){
            largest = i;
            n = n/i;
        }
    }
    cout<<largest<<" is the largest prime factor"<<endl;
}

int main() {
    prime_factor();
    return 0;
}

