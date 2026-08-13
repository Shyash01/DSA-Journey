#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h> 

using namespace std;

void nextPermutation(vector<int>& nums) {
        int idx = -1;
        int n = nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        
        cout<<idx<<endl;
        if(idx==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            reverse(nums.begin()+idx+1,nums.end());
            for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
            }

            cout<<endl;

            int temp = nums[idx];
            nums[idx]=nums[idx+1];
            nums[idx+1] = temp;
            
        }   
        
      


    }
int main(){
    vector<int> nums = {1,4,5,3,2};
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    nextPermutation(nums);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
