#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st Side: ";
    cin>>a;
    cout<<"Enter 2nd Side: ";
    cin>>b;
    cout<<"Enter 3rd Side: ";
    cin>>c;

    if((a<b+c) && (b<a+c) && (c<a+b)){
        cout<<"These are the sides of triangle.";
    }else{
        cout<<"Can not be sides of triangle";
    }
}