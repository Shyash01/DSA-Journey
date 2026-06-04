#include<iostream>
using namespace std;
//nst nsp concept

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int m = n-1;
    int nsp = 1;

    for(int i=1; i<=2*n-1; i++){
        cout<<i;
    }
    cout<<endl;
    // int num = n;
    // for(int i =1; i<=m;i++){
    //     //number
    //     for(int j =1; j<=m+1-i;j++){
    //         cout<<j;
    //     }

    //     //spaces
    //     for(int k=1; k<=nsp; k++){
    //         cout<<" ";
    //     }
    //     nsp+=2;

    //     //number
       
    //     for(int j =1; j<=m+1-i;j++){
    //         cout<<num+j;
            
    //     }

    //     num++;
        
    //     cout<<endl;
    // }

    
    for(int i =1; i<=m;i++){
        int a =1;
        //number
        for(int j =1; j<=m+1-i;j++){
            cout<<a;
            a++;
        }

        //spaces
        for(int k=1; k<=nsp; k++){
            cout<<" ";
            a++;
        }
        nsp+=2;

        //number
       
        for(int j =1; j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        
        cout<<endl;
    }




}