#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void findMax(int arr[],int idx,int max){
    if(idx < 0){
        cout<<max;
        return;
    }
    
    if(arr[idx]>max) max = arr[idx];
    findMax(arr,idx-1,max);
}

int returnMax(int arr[],int idx){
    if(idx < 0) return INT_MIN;
    return max(arr[idx],returnMax(arr,idx-1));
    
}
int main(){
    int arr[5] = {1,9,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    int ans = returnMax(arr,n-1);
    cout<<ans;
}