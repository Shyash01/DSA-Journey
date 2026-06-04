#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rows: ";
    cin>>m;

    for(int i = 0;i<m;i++){
        for(int j=1;j<=(m-i);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}