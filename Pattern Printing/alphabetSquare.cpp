#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;

    for(int i = 0;i<m;i++){
        for(int j=0;j<m;j++){
            
            cout<<(char)(j+65)<<" ";
        }
        cout<<endl;
    }
}