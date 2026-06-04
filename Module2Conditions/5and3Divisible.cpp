#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter an number: ";
    cin>>num;
    if(num%3 ==0 && num%3 ==0 ){
        cout<<"Divisible by 3 and 5";
    }else{
        cout<<"Not Divisible by 3 and 5";
    }
    // can be done by divisible by 15;
    return 0;
    
}