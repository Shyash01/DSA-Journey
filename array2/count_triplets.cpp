#include<iostream>
#include<vector>
#include<algorithm>
// #include<bits/stdc++.h>

using namespace std;

int countTriplet(vector<int>& arr,int x){
    int n = arr.size();
    int count = 0;

    sort(arr.begin(),arr.end());

    for(int i=0;i<n-2;i++){
        
        int left = i+1;
        int right = n-1;
        
        while(left<right){
            int curr_Sum = arr[i] + arr[left] + arr[right];
            if(curr_Sum==x){
                count++;
                left++;
                right--;
            } 

            else if(curr_Sum < x){
                left++;
            }

            else{
                right--;
            }
        }

    }

    return count;

}

int main(){

    vector<int>arr = {3,4,1,5,2,6,1,4,9};
    int x = 9;
    int count = countTriplet(arr,x);
    cout<<count;

}


