#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int *ptr = &x;
    int **p = &ptr;

    // cout<<x<<endl; 
    // cout<<ptr<<endl;// Address of x -> 0x61ff08
    // cout<<p; // address of ptr -> 0x61ff04

    cout<<&x<<endl; 
    cout<<ptr<<endl;// Address of x -> 0x61ff08
    cout<<*p; // x ka address
    

}