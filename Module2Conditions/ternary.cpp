#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    // if(x%2 == 0) cout<<"Even";
    // else cout<<"Odd";

    (x%2==0) ? cout<<"even" : cout<<"odd";
}