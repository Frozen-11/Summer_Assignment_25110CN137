#include <iostream>
using namespace std;

//1.Write a program to Check whether a number is prime
void check_prime() {
    int n,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<2){
        cout<<n<<" is not a prime number."<<endl;
    }
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            count++;
        }
    }
    if (count==2){
        cout<<n<<" is a prime number"<<endl;
    }
    else{
        cout<<n<<" is not a prime number"<<endl;
    }

}

//2. Write a program to Print prime numbers in a range
void prime_no(){
    int n,count;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        count=0;
        for(int j=1; j<=i; j++){
        if(i%j == 0){
            count++;
        }
    }
    if (count==2){
        cout<<i<<endl;
    }
    }
}

//3. Write a program to Find GCD of two numbers
void gcd(){
    int a,b,gcd;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    for(int i=1; i<=a; i++){

        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd<<endl;
}

//4.Write a program to Find LCM of two numbers
void lcm() {
    int a,b,lcm,gcd;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
     for(int i=1; i<=a; i++){

        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    lcm= (a*b)/gcd;
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm<<endl;
}


int main() {
    //check_prime();
    //prime_no();
    //gcd();
    lcm();
    return 0;

}