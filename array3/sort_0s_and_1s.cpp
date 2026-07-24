#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

void sortZeroAndOne(vector<int>& v){
    
    int noZ = 0;
    int noO = 0;

    for(int i =0;i<v.size();i++){
        if(v[i]==0) noZ++ ;
        else noO++;
    }


    for(int i=0;i<v.size();i++){
            if(i<noZ) v[i] = 0;
            else v[i] = 1;
    }
       
}

int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);

    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    sortZeroAndOne(v);
    
    cout<<endl;


    // sort(v.begin(),v.end());  // This method can not be used.



    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}