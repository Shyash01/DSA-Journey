#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> mergeArray(vector<int>& v1, vector<int>& v2,vector<int>& finalArray){
    
    
    int i=0;
    int j=0;
    int k=0;

   

    while(i<v1.size()&&j<v2.size()){

        if(v1[i]<=v2[j]){
           finalArray[k]=v1[i];
           i++;
           
        }
        else{
            finalArray[k]=v2[j];
           j++;
        }  

        k++;
    }

    if(i==v1.size()){
    while(i<v1.size()){
            finalArray[k]=v1[i];
            i++;
            k++;
    }
    }

    if(j==v2.size()){
    while(j<v2.size()){
            finalArray[k]=v2[j];
            j++;
            k++;
    }
    }


    return  finalArray;
        
    
    
}

int main(){
    vector<int> v1={1,4,5,8};
    vector<int> v2={2,3,6,7,10};

    int m=v1.size();
    int n=v2.size();
     vector<int> finalArray((m+n));

    vector<int> v = mergeArray(v1,v2,finalArray);
    
    for(int i=0;i<finalArray.size();i++){
        cout<<finalArray[i]<<" ";
    }
    
    

}