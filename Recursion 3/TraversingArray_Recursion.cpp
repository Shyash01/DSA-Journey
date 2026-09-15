#include<iostream>
#include<vector>
using namespace std;

void printArray2(vector<int>& arr,int n){
    if(n==arr.size()) return;
    cout<<arr[n]<<" ";
    printArray2(arr,n+1);
}

void printArray(int arr[], int n, int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    printArray(arr,n,idx+1);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> v= {1,2,3,4,5};
    printArray2(v,0);
    //printArray(arr,size,0);
}