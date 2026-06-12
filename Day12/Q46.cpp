#include <iostream>
#include <cmath>
using namespace std;

//46. Write a program to Write function for Armstrong
bool isArmstrong(int n){
    int num =n, count=0, sum=0;
    int temp = n;
    while( temp> 0){
        count++;
        temp/=10;
    }
    temp = n;
    while(temp>0){
        int digit = temp%10;
        sum = sum + pow(digit,count);
        temp = temp/10;
    }
    return sum == num;
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isArmstrong(n)){
        cout<<n<<" is an Armstrong number";
    }
    else{
        cout<<n<<" is not an Armstrong number";
        return 0;
    }

}