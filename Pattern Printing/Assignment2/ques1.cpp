#include<iostream>
using namespace std;
//nst nsp concept

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int nst = 1;
    int nsp = n-1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp;j++){
            cout<<" ";
        }

        for(int l=1; l<=nst;l++){
            cout<<l;
        }
        
        nst +=2;
        nsp--;
        cout<<endl;
    }



}