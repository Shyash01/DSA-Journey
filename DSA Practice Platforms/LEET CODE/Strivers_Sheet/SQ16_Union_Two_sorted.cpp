#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr1 = {1,2,5,6,7};
    vector<int>arr2 = {2,4,5,7,8};
    int i=0,j=0,k=0;
    
    vector<int>result;

    while(i<5&&j<5){
        if(arr1[i]<arr2[j]){
            result.push_back(arr1[i]);
            i++,k++;
        }
        else if(arr1[i]==arr2[j]){
            result.push_back(arr1[i]);
            i++,j++,k++;
        }
        else{
            result.push_back(arr2[j]);
            j++,k++;
        }
    }

    while(i<5){
        result[k]=arr1[i];
        k++;
        i++;
    }
    while(j<5){
        result[k]=arr2[j];
        k++,j++;
    }

    for(i=0;i<=result.size();i++){
        cout<<result[i]<<endl;
    }
}