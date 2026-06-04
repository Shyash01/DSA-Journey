#include<iostream>
using namespace std;
int main(){

    int num1, num2, num3;
    cout<<"Enter an number 1: ";
    cin>>num1;

    cout<<"Enter an number 2: ";
    cin>>num2;

    cout<<"Enter an number 3: ";
    cin>>num3;

    if(num1>num2 && num1>num3){
        cout<<num1<<" is greatest";
    }
    if(num2>num1 && num2>num3){
        cout<<num2<<" is greatest";
    }
    if(num3>num1 && num3>num2){
        cout<<num3<<" is greatest";
    }else{
        cout<<"Number are equal";
    }
    


}