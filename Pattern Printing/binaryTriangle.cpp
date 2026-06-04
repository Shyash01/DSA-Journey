#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter number: ";
    cin>>m;
    
    // int a=m;
    // for(int i =1; i<=m; i++){

    //     if(i%2!=0) a=1;
    //         else a=0;
    //     for(int j=1;j<=i;j++){
    //         cout<<a;
    //         if(a==1) a=0;
    //         else a=1;
    //     }
        
    //     cout<<endl;
    // }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) cout<<"1";
            else cout<<"0";
        }
        cout<<endl;
    
    }

}