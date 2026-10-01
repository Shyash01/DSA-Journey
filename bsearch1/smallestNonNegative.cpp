#include<iostream>
using namespace std;

int main(){

    int arr[]={0,1,3,4,6,7,8,9,11};

    if(arr[0]!=0) return 0;
    int low=0;
    int high=8;
    int ans=-1;

    while(low<=high){
        int mid = low+(high-low)/2;

        // if(arr[mid]>mid){
        //     ans=mid;
        //     high = mid-1;
        // }
        // else{
        //     low=mid+1;
        // }


        if(arr[mid]==mid){
            low=mid+1;
        }
        else{
            
            ans=mid;
            high = mid-1;
        }
    }

    cout<<ans;

}