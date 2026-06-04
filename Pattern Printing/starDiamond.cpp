#include<iostream>
using namespace std;
//nst nsp concept

int main(){
    int m;
    cout<<"Enter number: ";
    cin>>m;
    int nst=1;
    int nsp = m-1;
    for(int i =1; i<=2*m-1; i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        if(i<=m-1) nsp--;
        else nsp++;


        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        if(i<=m-1) nst+=2;
        else nst-=2;

        cout<<endl;

    }
}
















//  for(int i =1; i<2*m-1; i++){
//         if(i<=m){
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         nsp--;

//         for(int k=1;k<=nst;k++){
//             cout<<"*";
//         }
//         nst+=2;
//         cout<<endl;
//         }

//         else{

//         nsp++; 
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
        
//         nst-=2;
//         for(int k=1;k<=nst;k++){
//             cout<<"*";
//         }
        
//         cout<<endl;

//     }

//     }