#include<iostream>
using namespace std;

void fact(int m,int n){
    if(m>n) return;
    cout<<m<<endl;
    fact(m+1,n);
    return;
}


int main(){
    fact(1,5);
}