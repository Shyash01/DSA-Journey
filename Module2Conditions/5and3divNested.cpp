#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter an number: ";
    cin>>num;
 
    if(num%3 ==0){
        if(num%5 ==0){
            cout<<"Matching conditions";
        }
        else{
            cout<<"Not matching conditions";
        }
    }else{
        cout<<"Not matching conditions";
    }
    return 0;
    
}