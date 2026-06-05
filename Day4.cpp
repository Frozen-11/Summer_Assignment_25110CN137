#include <iostream>
#include <cmath>
using namespace std;

//1. Write a program to Generate Fibonacci series
void fibonacci() {
    int n,num1=0,num2=1,sum=0;
    cout<<"Enter maximum number: ";
    cin>>n;
    while(sum<=n){
        cout<<sum<<" ";
        num1 = num2;
        num2 = sum;
        sum = num1 + num2;
    }
}

//2. Write a program to Find nth Fibonacci term
void fbc_term(){
int n,num1=0,num2=1,sum=0;
    cout<<"Enter maximum number of term: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<sum<<" ";
        num1 = num2;
        num2 = sum;
        sum = num1 + num2;
    }
}


//3. Write a program to Check Armstrong number
void armstrong(){
int n,rem,sum=0,temp,count=0;
float prod;
cout<<"Enter a number: ";
cin>>n;
temp = n;
while(temp>0){
    temp /= 10;
    count++;
}
temp = n;
while(temp>0){
    rem = temp%10;
    prod = pow(rem,count);
    sum = sum + prod;
    temp/=10;

}
if(sum == n){
    cout<<n<<" is an Armstrong number"<<endl;
}
else{
    cout<<n<<" is not an Armstrong number"<<endl;
}
}


//4.Write a program to Print Armstrong numbers in a range
void arm_range(){
int max,rem,temp;
float prod;
cout<<"Enter a maximum number: ";
cin>>max;

for(int i=0; i<=max; i++){
temp = i;
int count=0, sum=0;

while(temp>0){   //counting digits
    count++;
    temp/= 10;
}
temp = i;

while(temp>0){
    rem = temp%10;
    prod = pow(rem,count);
    sum = sum + prod;
    temp/=10;

}
if(sum == i){
    cout<<i<<" ";
}

}
cout<<endl;
}


int main(){
    fibonacci();
    fbc_term();
    armstrong();
    arm_range();
    return 0;
}