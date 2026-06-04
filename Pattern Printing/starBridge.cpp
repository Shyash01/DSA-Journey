#include<iostream>
using namespace std;
//nst nsp concept

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    // int nst=2*m-1;
    // int nsp = 0;
    // if(nsp==0){
    //         for(int j=1;j<=nst;j++){
    //         cout<<"*";
    //         } 
    //     nsp++;
    //     }
    //     cout<<endl;
    // for(int i =2; i<=m; i++){
        
    //     for(int k=1;k<=(nst-nsp)/2;k++){
    //         cout<<"*";
    //     }

    //     for(int l=1;l<=nsp;l++){
    //         cout<<" ";
    //     }
       

    //     for(int m=1;m<=(nst-nsp)/2;m++){
    //         cout<<"*";
    //     }
    //      nsp=nsp+2;
    //     cout<<endl;

    // }

    // Sir's soln


    int m = n-1;
    int nsp = 1;

    for(int i=1; i<=2*n-1; i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i =1; i<=m;i++){
        //stars
        for(int j =1; j<=m+1-i;j++){
            cout<<"*";
        }

        //spaces
        for(int k=1; k<=nsp; k++){
            cout<<" ";
        }

        //stars
        for(int j =1; j<=m+1-i;j++){
            cout<<"*";
        }

        nsp+=2;
        cout<<endl;
    }




}