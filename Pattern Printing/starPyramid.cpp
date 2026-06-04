#include<iostream>
using namespace std;
//nst nsp concept

int main(){
    int m;
    cout<<"Enter number: ";
    cin>>m;
    int nst=1;
    int nsp = m-1;
    for(int i =1; i<=m; i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;

        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;

    }


}