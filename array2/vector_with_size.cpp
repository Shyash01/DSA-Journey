#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;  // Can initialize the vector by specifying size like here in (5)
                        // It initializes the vector with size 5 and by default value at each cell as 0

    
    //vector<int> v(5,7);  // Can initialize the vector by specifying default value, along with size. 
                        // It initializes the vector with size 5 and default value as 7

    //cout<<v[5]<<endl; // If not give size -> then directly accessing value by index will cause an Segmentation Fault. 
                        // Since by default size 0f vector without pre specified size is 0;

    // for(int i = 0;i<5;i++){
    //     cin>>v[i];
    // }
    //vector<int> v(100,1000);  // Can initialize any size of default vector. 

    // for(int i=0;i<5;i++){
    //     cout<<v[i]<<" ";
    // }

    // cout<<endl<<v.size();
    // cout<<endl<<v.capacity();

    // v.pop_back();

    // cout<<endl<<v[4];
    // // v.pop_back();

    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

      for(int i=0;i<5;i++){
       cout<<v[i]<<" ";
    }

   

}