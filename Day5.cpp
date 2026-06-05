#include <iostream>
using namespace std;

//1. Write a program to Check perfect number
void check_perfect() {
    int n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<n; i++){
        if(n%i==0){
            sum = sum + i;
        }
        
    }
    if(sum == n){
        cout<<n<<" is a perfect number"<<endl;
    }
    else{
        cout<<n<<" is not a perfect number"<<endl;
    }
}

//2. Write a program to Check strong number
void strong_num(){
    int n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    int temp = n;
    while(temp>0){
        int fact = 1;
        int rem = temp%10;
         for(int j=1; j<=rem; j++){  //factorial
            fact = fact* j;}
         
        sum = sum + fact;
        temp /= 10;
    }
    if(sum == n){
        cout<<n<<" is a strong number"<<endl;
    }
    else{
        cout<<n<<" is not a strong number"<<endl;
    }

}


//3. Write a program to Print factors of a number
void factor() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for( int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
} 

//4. Write a program to Find largest prime factor
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
    check_perfect();
    strong_num();
    factor();
    prime_factor();


    return 0;
}