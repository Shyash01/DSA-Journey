#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rows: ";
    cin>>m;

  

    for(int i = 1;i<=m;i++){
        for(int j=1;j<=m;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}