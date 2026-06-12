#include <iostream>
using namespace std;

//45. Write a program to Write function for palindrome
bool isPalindrome(int n){
    int num = n;
    int reverse =0;

    while(n>0){
        int rem= n%10;
        reverse = reverse*10 + rem;
        n /=10;
    }
    return num == reverse;
} 
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isPalindrome(n)){
        cout<<n<<" is a Palindrome number";
    }
    else{
        cout<<n<<" is not a Palindrome";
    }
    return 0;
}