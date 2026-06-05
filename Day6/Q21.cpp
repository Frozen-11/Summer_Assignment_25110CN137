#include <iostream>
using namespace std;

//21. Write a program to Convert decimal to binary
void dec_to_bin() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    long long binary = 0;
    int place = 1;
    int temp=n;

    while (temp > 0){
        int rem = temp % 2;
        binary = binary + rem * place;
        place = place * 10;
        temp/=2;
    }
    cout<<"Binary of "<<n<<" = "<<binary<<endl;
}

int main() {
    dec_to_bin();
    return 0;
}