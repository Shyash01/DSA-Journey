#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

void sortZeroAndOne(vector<int>& v){
    
    int i = 0;
    int j = v.size()-1;

    //Sir's Solution: 
    while(i<j){

        if(v[j]==1) j--;
        if(v[i]==0) i++;

        if(i>j) break;

        if(v[i]==1 && (v[j]==0) ){
            v[i] =0;
            v[j] = 1;

                i++;
                j--;       
        }
    }


    // My solution
    // while(i<j){
    //     if(v[i]==1 && (v[j]==0) ){
    //         int temp = v[i];
    //             v[i] = v[j];
    //             v[j] = temp;

    //             i++;
    //             j--;       
    //     }

    //     else if(v[i]==1 && v[j]==1){
    //         j--;
    //     }

    //     else if(v[i]==0 && v[j]==0){
    //         i++;
    //     }

    //     else{
    //         i++;
    //         j--;
    //     }
        
    // }


       
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