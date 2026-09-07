#include<iostream>
using namespace std;

void fact(int n){
    if(n==0) return;
    
    fact(n-1);
    cout<<n<<endl;
    return;
}


int main(){
    fact(5);
}