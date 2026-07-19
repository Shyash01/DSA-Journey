// Q4. Given an array, predict if the array contains duplicates or not.

#include<iostream>
#include<array>
#include<vector>
#include<unordered_set>
using namespace std;


// TC -> O(n^2)
// bool chkDuplicate(array<int,5> arr){
//     bool chk = false;
//     int n = arr.size();

//     for(int i = 0; i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(arr[i] == arr[j]){
//                 chk = true;
//             }
//         }
//     }
//     return chk;
// }

bool chkDuplicate(vector <int> nums){
    
    unordered_set<int> seen;

    for(int num:seen){
        if(seen.find(num) != seen.end()){
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main(){
    // array<int,5> arr = {1,2,3,4,5};

    vector <int> nums = {1,2,3,1,5};

    if(chkDuplicate(nums)){
        cout<<"Duplicate Exisits";
    }
    else{
        cout<<"Duplicate Does not exists";
    }
    
}