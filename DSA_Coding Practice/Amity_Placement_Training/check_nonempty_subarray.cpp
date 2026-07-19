#include <bits/stdc++.h> 
using namespace std;

bool checkzeroSum(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        int sum=arr[i];
        if(sum==0){
            return true;
        }

        for(int j=i+1;j<arr.size();j++){
            sum+=arr[j];
            if(sum==0){
                return true;
            }
        }
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
    

}