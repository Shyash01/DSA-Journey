#include<iostream>
#include<cmath>
using namespace std;

int pow(int x, int n){

    if(n==0) return 1;
    if(n==1) return x;

    int a = pow(x,n/2);
    if(n%2==0) return a*a;
    else return a*a*a;

}
int main(){
    cout<<pow(3,6);
}