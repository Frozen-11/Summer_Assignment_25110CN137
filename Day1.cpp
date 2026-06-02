#include <iostream>
using namespace std;
//Write a program to Calculate sum of first N natural numbers
void natural_sum() {
    int n,sum=0;
    cout<<"Enter a positive  number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        sum = i + sum;
    }
    cout<<"SUM = "<<sum<<endl;
}

//Write a program to Print multiplication table of a given number
void table() {
    int n,result;
    cout<<"Enter a positive number: ";
    cin>>n;
    for(int i=1; i<=10; i++){
        result= i*n;
        cout<<n<<" x "<<i<<" = "<<result<<endl;
    }
}

//Write a program to Find factorial of a number
void factorial(){
    int n,fact=1;
    cout<<"Enter a positive number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        fact = fact* i;
    }
    cout<<"factorial of "<<n<<" = "<<fact<<endl;
}

//Write a program to Count digits in a number
void count(){
    int n,count=0;
    cout<<"Enter a positive number:";
    cin>>n;
    int temp= n;
    while(temp>0){
        count++;
        temp = temp/10;
    }
    cout<<"Number of digits in "<<n<<" = "<<count<<endl;
}


int main() {
    natural_sum();
    table();
    factorial();
    count();
    return 0;
}