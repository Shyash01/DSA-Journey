//Q5. WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

#include<iostream>
#include<vector>
using namespace std;


// int missingElement(vector<int> nums){
    
//     if(nums.empty()||nums[0]!=1){
//         return 1;
//     }

//     int n = nums.size();
//     int sum = 0;
//     for(int i =  0; i<n; i++){
//         sum+=nums[i];  
//     }

//     int val = nums[n-1];
//     int total = val*(val+1)/2;

//     int missingValue = total - sum;
//     return missingValue;    
// }

int missingElement(vector<int> nums){
    
    if(nums.empty()||nums[0]!=1){
        return 1;
    }

    int n = nums.size();
    int target = 1;

    for(int i = 0;i<n;i++){

        if(nums[i]<target){
            continue;
        }

        if(nums[i] ==target){
            target++;
        }
        else{
            return target;
        }
    }
    
}




int main(){
    vector<int> nums = {1,2,3,4,4,4,4,4,5,7};

    int val = missingElement(nums);
    cout<<val;
}

// Implementation BY BINARY SEARCH
// int missingElement(vector<int> nums){
//     int n = nums.size();

//     if(nums.empty()||nums[0]!=1){
//         return 1;
//     }

//     int low = 0;
//     int high = n-1;

//     while(low<=high){
//         int mid = low + (high - low)/2;

//         if(nums[mid] ==mid+1){
//             low = mid + 1;
//         }else{
//             high = mid - 1;
//         }
//     }

//     return low +1;

// }