#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;

    for(int i = 1;i<=m;i++){
        int x=1;
        for(int j=1;j<=i;j++){
            cout<<x<<" ";
            x=x+2;
        }
        cout<<endl;
    }
}