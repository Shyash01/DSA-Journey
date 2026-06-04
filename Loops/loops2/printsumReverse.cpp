#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int a = n;
    int sum = 0;
    int revNum = 0; 
    while(n>0){
        revNum = revNum*10;
        int lastdigit = n%10;
        revNum += lastdigit;
        n=n/10;
    }
    cout<<revNum+a;
}