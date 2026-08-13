#include <bits/stdc++.h> 
using namespace std;

int longestSubArray(vector<int> arr){
    int  maxlen = 0;
    unordered_map<int,int> mp;
    
    for(int i =0;i<arr.size();i++){
        if(arr[i]==0){
            arr[i] = -1;
        }
    }

    int sum = 0;

    for(int i =0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==0){
            maxlen=i+1;
        }
        else if(mp.find(sum)!=mp.end()){
            maxlen=max(maxlen,i-mp[sum]);
        }
        else{
            mp[sum] = i;
        }
    }


    
    return maxlen;
}


int main() {
    // GIven an array arr[] containing both positive and negative integers,
    // fiND Longest subarray which contains equal number of 0s and 1s
    
    
    vector<int> arr = {1,0,1,1,1,0,0};
    int check = longestSubArray(arr);
    
        cout<<"sub array found "<<check;
    

}