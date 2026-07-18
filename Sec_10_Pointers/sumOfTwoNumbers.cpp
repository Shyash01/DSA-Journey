#include<iostream>
using namespace std;
int main(){
    int x;
    int y;

    int* p1 = &x;
    int* p2 = &y;

    cout<<"Enter first number: ";
    cin>>*p1;

    cout<<"Enter Second number: ";
    cin>>*p2;


    cout<<x+y<<endl;
    cout<<*p1 + *p2;

}