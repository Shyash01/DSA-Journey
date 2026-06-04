#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    int sum = 0;
    int lastDigit = 0;

    while(num>0){
        lastDigit = num%10;
        sum+=lastDigit;
        num=num/10;
    }
    cout<<sum;
}