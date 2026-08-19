#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>

using namespace std;

bool chkArraySubset(vector<int>& arr1,vector<int>& arr2){
    unordered_set<int> setB(arr2.begin(),arr2.end());

    for(int num : arr1){
        if(setB.find(num)==setB.end())
        return false;
    }

    return true;
}

int main(){

    vector<int> arr2 = {10,40,30,50,20};
    vector<int> arr1= {40,20,30};
    
    
    if(chkArraySubset(arr1,arr2)){
        cout<<"Array is Subset";
    }
    else{
        cout<<"Array is not a subset";
    }

}



// Brute Force Approach: 

    // int arr[5] = {10,40,30,50,20};
    // int brr[3] = {40,80,30};
    // int n= sizeof(arr)/sizeof(arr[0]) ;
    // int m=sizeof(brr)/sizeof(brr[0]);

    // int chk = 0;
    // int i=0;
    // while(i<m){
    //     int j=0;
    //     while(j<n){
    //         if(brr[i]==arr[j]){
    //             chk++;
    //             break;
    //         } 
    //         j++;
            
    //     }
    //     i++;
    // }

    // if(chk==m) cout<<"Yes array is subset";
    // else cout<<"Array is not subset";