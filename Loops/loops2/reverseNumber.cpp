#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int a = num;
    int newNum = 0;
    int lastDigit = 0;
    while(a>0){
        newNum = newNum*10;
        lastDigit = a%10;
        newNum += lastDigit;
        a/=10;
    }
    cout<<newNum;
}