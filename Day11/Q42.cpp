#include <iostream>
using namespace std;
//42. Write a program to Write function to find maximum
int max(int a, int b){
    if(a>b)
        return a;
    
    else
        return b;
    
}
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Maximum number is "<<max(a,b);
    return 0;
}