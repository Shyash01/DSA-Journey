#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter number: ";
    cin>>m;
    int num = 1;
    for(int i =1; i<=m; i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }


}