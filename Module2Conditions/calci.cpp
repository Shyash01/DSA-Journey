#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter the problem: ";
    cin>>a>>op>>b;

    // if(op=='+'){
    //     cout<<"Result: "<<a+b;
    // }
    // if(op=='-'){
    //     cout<<"Result: "<<a-b;
    // }
    // if(op=='*'){
    //     cout<<"Result: "<<a*b;
    // }
    // if(op=='/'){
    //     if(b!=0){
    //         cout<<"Result: "<<a/b;
    //     }
    //     else{
    //     cout<<"Invalid Input";
    //     }
    // }

    switch(op){
    case '+':
            cout<<"Result: "<<a+b;
            break;
    case '-':
            cout<<"Result: "<<a-b;
            break;
    case '*':
            cout<<"Result: "<<a*b;
            break;
    
    case '/':
            cout<<"Result: "<<a/b;
            break;

    default: 
    cout<<"Invalid Input";
    }

}