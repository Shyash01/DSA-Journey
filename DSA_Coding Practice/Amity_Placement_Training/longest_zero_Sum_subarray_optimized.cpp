#include <bits/stdc++.h> 
using namespace std;

int longestSubArray(vector<int> arr){
    unordered_map<int,int>mp;
    int maxlen = -1;
    int sum = 0;
    for(int i = 0;i<arr.size();i++){
        
        sum += arr[i];
        if(sum==0){
            maxlen=i+1;
        }
        else if(mp.find(sum) != mp.end()){
            maxlen=max(maxlen,i-mp[sum]);
        }
        else{
            mp[sum]=i;
        }
        // MISTAKE REMOVED: mp.insert(sum) was deleted from here
    }
    
    return maxlen; // FIX: Added the missing return statement
}



int main() {
    // GIven an array arr[] containing both positive and negative integers,
    // Find  a non - empty subarray whose sum is equal to zero
    // 4,2,-3,1,6 lenth = 5


    // For brute force : TC - O(n), SC = max(o(n,m))

    // Optimized Approach -> USE MAP
    // TC -> O(n), SC -> O(n)
    
    vector<int> arr = {9,-3,3,-1,6,-5};
    int check = longestSubArray(arr);
    
        cout<<"sub array found"<<endl;
        cout<<"Length of longest subarray: "<<check;
    
    
    //4,2,-3,1,6
    

}