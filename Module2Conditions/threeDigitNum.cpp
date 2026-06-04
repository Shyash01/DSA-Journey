#include<iostream>
using namespace std;
int main(){

    int num;

    cout<<"Enter an number: ";
    cin>>num;


    if(num>=100 && num<=1000 ){
        cout<<"Three digit number";
    }else{
        cout<<"Not a three digit number";
    }
    return 0;
}