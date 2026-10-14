#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v ={};

    for(int i=1;i<v.size();i++){
        v[i]=v[i]+v[i-1];
    }

    for(int i=0;i<v.size();i++){
        if(2*v[i]==v[v.size()-1]){
            cout<<"True";
            return 1;
        }
    }
    
    cout<<"False";
    return 1;
}