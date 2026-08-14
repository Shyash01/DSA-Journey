#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(5);

    // for(int i=0;i<4;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // cout<<endl;

    
    // for(int i=0;i<4;i++){
    //     cout<<v[i]<<" ";
    // }


    for(int i=0;i<5;i++){
        v.at(i) = i;
    }

    for(int i=0;i<5;i++){
       cout<<v.at(i)<<" ";
    }

    
   

}