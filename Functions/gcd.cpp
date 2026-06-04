#include<iostream>
using namespace std;

int gcd(int a, int b){
    
    int num = min(a,b);
    int hcf =1;

    for(int i=num;i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a;
    cout<<"Enter first number: ";
    cin>>a;

    int b;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<"HCF of "<<a<<" and "<<b<<" is: "<<gcd(a,b);
}