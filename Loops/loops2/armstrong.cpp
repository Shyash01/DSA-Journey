#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // cout<<"Enter number: ";
    // cin>>num;
    
    for(int num = 1; num<500;num++){
        int a = num;
        int sum = 0;
        int lastDigit = 0;
        int digit = log10(num) +1;
        while(a>0){
        lastDigit = a%10;
        sum+=pow(lastDigit,digit);
        a=a/10;
        }
        if(sum==num) cout<<num<<endl;
    }
}