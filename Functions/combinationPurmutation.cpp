#include<iostream>
#include<cmath>
using namespace std;
int fact(int x){
    if(x==0 || x==1) return 1;

    else return x*fact(x-1);
    
}

int pnc(int n, int r){
        int ncr = fact(n)/(fact(r)*fact(n-r));
        return ncr;
}

int permutation(int n, int r){
    int npr = fact(n)/fact(n-r);
    return npr;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int r;
    cout<<"Enter r: ";
    cin>>r;

    // int nfact = fact(n);
    // int rfact = fact(r);
    // int nrfact = fact(n-r);

    // int ncr = nfact/(rfact*nrfact);
    
    cout<<pnc(n,r)<<endl<<permutation(n,r);
}