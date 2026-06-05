#include <iostream>
using namespace std;

//23. Write a program to Count set bits in a number
void count() {
    int n,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    while (n > 0){
        if (n % 2 == 1){
            count++;
            n /= 2;
        }
    }
        
        cout<<"Number of 1 bits = "<<count<<endl;
}

int main() {
    count();
    return 0;
}