#include<iostream>
using namespace std;
int main(){
    int x = 122;
    int* p = &x;
    cout<<p<<endl;
    cout<<*p<<endl;

    int y =5 ;
    *p = &y;
    cout<<*p<<endl<<p;
    
     
}