#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v; 


    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);

    cout<<v.size();
    cout<<endl;
    cout<<v.capacity();
    cout<<endl;


    for(int i=0;i<5;i++){
        v.pop_back();
    }

    
    cout<<v.size();
    cout<<endl;
    cout<<v.capacity();







}