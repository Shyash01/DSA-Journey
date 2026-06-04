#include<iostream>
using namespace std;
//nst nsp concept

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;


    for(int i=1; i<=n; i++){
       
        for(int j=1; j<n-i;j++){
            cout<<" ";
        }

        for(int k=i; k>=0;k--){
            cout<<char('A');
        }

    cout<<endl;
    }

}