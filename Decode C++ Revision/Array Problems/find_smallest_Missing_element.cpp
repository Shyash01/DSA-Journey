//Q5. WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

#include<iostream>
#include<vector>
using namespace std;



int missingElement(vector<int> nums){
    int n = nums.size();

    if(nums.empty()||nums[0]!=1){
        return 1;
    }

    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = low + (high - low)/2;

        if(nums[mid] == mid+1){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return low +1;

}



int main(){
    vector<int> nums = {1,2,4,5,6};

    int val = missingElement(nums);
    cout<<val;
}


// int missingElement(vector<int> nums){
    // Implementation BY BINARY SEARCH - O(logn)
    // // Slow Approach

    // if(nums.empty() || nums[0]!=1) return 1;

    // int target = 1;
    // int n = nums.size();

    // for(int i=0;i<n;i++){
    //     if(nums[i]==target){
    //         target++;
    //     }
    //     else if(nums[i]>target){
    //         return target;
    //     }
    // }
    // return target;
// }
