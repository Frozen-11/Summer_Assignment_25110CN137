#include <iostream>
using namespace std;

//28. Write a program to Recursive reverse number
int reverse(int n,int rev=0){
    if(n==0){      //base condition
        return rev;
    }

    return reverse(n/10,rev*10 + n%10);

}
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<reverse(n);
    return 0;
}