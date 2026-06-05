#include <iostream>
using namespace std;

//18. Write a program to Check strong number
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

int main(){
    strong_num();
    return 0;
}
