#include <iostream>
using namespace std;

//1. Write a program to Find sum of digits of a number
void sum_digit(){
    int n,sum=0,rem;
    cout<<"Enter a positive number: ";
    cin>>n;
    int temp = n;
    while(temp>0){
        rem = temp%10;
        sum = sum + rem;
        temp = temp/10;
    }
    cout<<"Sum of digits = "<<sum<<endl;
}

//2.Write a program to Reverse a number
void reverse() {
    int n,rem,sum=0,rev=0;
    cout<<"Enter a number: ";
    cin>>n;
    int temp = n;
    while(temp>0){
        rem = temp%10;
        rev = (rev *10)+rem;
        temp = temp/10;
    }
    cout<<"Reverse of "<<n<<" = "<<rev<<endl;
}

//3.Write a program to Find product of digits
void prod_digit(){
    int n,rem,prod=1;
    cout<<"Enter a positive number: ";
    cin>>n;
    int temp=n;
    while(temp>0){
        rem = temp%10;
        prod = prod * rem;
        temp = temp/10;
    }
    cout<<"Product of digits = "<<prod<<endl;
}

//4. Write a program to Check whether a number is palindrome
void check_palindrome() {
    int n,rem,sum=0,rev=0;
    cout<<"Enter a number: ";
    cin>>n;
    int temp = n;
    while(temp>0){
        rem = temp%10;
        rev = (rev *10)+rem;
        temp = temp/10;
    }
    if(rev == n){
        cout<<n<<" is a palindrome number."<<endl;
    }
    else{
        cout<<n<<" is not a palindrome."<<endl;
    }
    
}


int main(){
    sum_digit();
    reverse();
    prod_digit();
    check_palindrome();

    return 0;
}
