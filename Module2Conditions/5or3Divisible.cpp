#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter an number: ";
    cin>>num;
    if(num%3 ==0 || num%3 ==0 ){
        cout<<"Divisible by 3 or 5";
    }else{
        cout<<"Not Divisible by 3 and it is not divisible by 5 also";
    }
    return 0;
    
}