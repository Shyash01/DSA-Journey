#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter number: ";
    cin>>m;

    for(int i =1; i<=m; i++){
        for(int j=1;j<=m-i;j++){
            cout<<" ";
        }
        int num = 1;
        for(int k=1;k<=i;k++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }


}