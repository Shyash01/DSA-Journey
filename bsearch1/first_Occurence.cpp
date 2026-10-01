#include<iostream>
using namespace std;

int main(){

    int arr[13]={1,2,2,3,3,3,3,3,4,4,5,8,9};
    
    int lo = 0;
    int hi = 12;
    int tar =4;
    int ans=-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;

        if(arr[mid]>=tar){
            ans=mid;
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }

    cout<<ans;
}