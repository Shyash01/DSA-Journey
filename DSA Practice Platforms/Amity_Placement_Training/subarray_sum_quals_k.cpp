#include <bits/stdc++.h> 
using namespace std;

int totalSubArrays(vector<int>arr, int k){
    unordered_map<int,int>mp;
    int sum = 0;
    int count=0;
    for(int i = 0;i<arr.size();i++){
        
        sum += arr[i];
        if(sum==k){
            count++;
        }

        if(mp.find(sum - k) != mp.end()){
            count += mp[sum - k];
        }
        mp[sum]++;
    }
    return count;     
}


int main() {
    // GIven an array of integers nums and an integer k,
    // return the total number of subarrays whose sum equals to k
    // 1,1,1, k =2
    // Output = 2
    // TC = O(n)


    vector<int> arr = {1,1,1};
    int k = 2;
    int check = totalSubArrays(arr, k); 
    
    cout << "Total subarrays found: " << check;
    

}