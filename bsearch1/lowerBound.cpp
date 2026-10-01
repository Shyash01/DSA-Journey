#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,4,5,9,15,18,21,24};

    int lo = 0;
    int hi = nums.size()-1;
    int target = 20;
    int ans = -1;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        
        if(nums[mid]==target){
            cout<<nums[mid-1];
            return 1;
        }else if(nums[mid]<target){    
            lo = mid+1;  // mid can be lower bound
        }else {
            hi = mid -1;
        }
    }
 
        cout<<nums[hi+1];
        return 1;
}