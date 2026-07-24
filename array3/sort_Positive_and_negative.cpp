#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

void sortPosAndNeg(vector<int>& v){
    int i =0;
    int j = v.size()-1;
    
    while(i<j){

        if(v[i]<0 && (v[j]>0) ){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp; 

                i++;
                j--;       
        }
        if(v[j]<0) j--;
        if(v[i]>=0) i++;       
    }
       
}

int main(){
    vector<int> v = {1,-2,3,-4,-5,6,8};
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    sortPosAndNeg(v);
    
    cout<<endl;


    // sort(v.begin(),v.end());  // This method can not be used.



    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}