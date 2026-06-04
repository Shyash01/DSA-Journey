#include<iostream>
using namespace std;

int fact(int x){
    if(x==0 || x==1) return 1;

    else return x*fact(x-1);
    
}

int combination(int n, int r){
        int ncr = fact(n)/(fact(r)*fact(n-r));
        return ncr;
}

int main(){
    int n;
    cout<<"Enter no. of lines: ";
    cin>>n;

    

    for(int i =0; i<=n;i++){
        for(int j =0; j<=i;j++){
        cout<<combination(i,j)<<" "; // prints iCj
    }
    cout<<endl;
    }
}