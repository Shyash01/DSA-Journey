#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void change(vector<int>a){  // a-> 9,10,6, 1
    cout<<endl; 
    a[0] = 100;  // a-> 100 10 6 1
      for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

int main(){

    vector<int> v; 


    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    change(v);

    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}