#include <bits/stdc++.h> 
using namespace std;

bool longestSubArray(vector<int> arr){
    int  maxlen = INT_MIN;
    for(int i=0;i<arr.size();i++){
        int sum=arr[i];
        if(sum==0){
            cout<<i;
            return true;
        }

        for(int j=i+1;j<arr.size();j++){
            sum+=arr[j];
            if(sum==0){
                maxlen = max(maxlen,j-i+1);                
            }
        }
    }

    cout<<maxlen<<endl;
    return true;
}

int main() {
    // GIven an array arr[] containing both positive and negative integers,
    // Find length of a non - empty subarray whose sum is equal to zero
    // 9,-3,3, -1,6,-5

    //{-3,3}
    //{9,3,6}
    // 6,3,-3,-1,-5
    
    // For brute force : TC - O(n), SC = max(o(n,m))
    
    vector<int> arr = {9,-3,3,-1,6,-5};
    bool check = longestSubArray(arr);
    if(check){
        cout<<"sub array found";
    };
    

}