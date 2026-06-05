#include <iostream>
using namespace std;

//22. Write a program to Convert binary to decimal
void bin_to_dec() {
    int binary,decimal=0,base=1;
    cout<<"Enter a binary number: ";
    cin>>binary;
    int temp = binary;

    while(temp > 0) {
        int digit = temp % 10;
        decimal += digit * base;
        base *= 2;
        temp /= 10;
    }
    cout<<"Decimal of "<<binary<<" = "<<decimal<<endl;
    
}

int main() {
    bin_to_dec();
    return 0;
}