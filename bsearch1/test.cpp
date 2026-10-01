#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 108;
    
    for(int i=1;i<n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
}