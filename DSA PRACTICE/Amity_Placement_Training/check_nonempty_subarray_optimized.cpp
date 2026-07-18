#include <bits/stdc++.h> 
using namespace std;

bool checkzeroSum(vector<int> arr){
      unordered_set<int>s;
    int sum=0;
    for(int i =0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==0 || s.find(sum) != s.end()){
            return true;
        }
        s.insert(sum);
    }

}

int main() {
    // GIven an array arr[] containing both positive and negative integers,
    // check whether there exists a non - empty subarray whose sum is equal to zero
    // 4,2,-3,1,6 lenth = 5


    // For brute force : TC - O(n), SC = max(o(n,m))
    
    vector<int> arr = {4,2,-3,1,6};
    bool check = checkzeroSum(arr);
    if(check){
        cout<<"sub array found";
    };
  
    //4,2,-3,1,6
    

}