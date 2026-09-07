#include<iostream>
using namespace std;

void fact(int n){
    if(n==0) return;
    cout<<n<<endl;
    fact(n-1);
    return;
}


int main(){
    fact(5);
}