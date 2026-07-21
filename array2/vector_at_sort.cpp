#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(3);

    // cout<<v.at(2);

    // v.at(3) = 4;

    // cout<<v.at(3);


    // for(int i=0;i<v.size();i++){
    //     cout<<v.at(i);
    // } 


    // sort
    
    sort(v.begin(),v.end());

    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    } 
}