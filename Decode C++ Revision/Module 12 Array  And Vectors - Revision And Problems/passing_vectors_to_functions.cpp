#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(vector<int> a){

    int n = a.size();

    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a.at(i)<<" ";
    }
}

void change(vector<int> &b){
    b[0] = 100;

    b.at(3) = 200;
    display(b);
    cout<<endl;
}
int main(){

    vector<int>v;

    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    display(v);
    change(v);
    display(v);

  
}