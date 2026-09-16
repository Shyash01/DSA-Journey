#include<iostream>
#include<string>
#include<vector>

using namespace std;

// void printSubset(string ans, string original){
//     if(original.size()==0) {
//         cout<<ans<<endl;
//         return;
//     }   

//     char ch = original[0];
//     printSubset(ans+ch,original.substr(1) );
//     printSubset(ans,original.substr(1) );

// void storeSubset(string ans, string original,int idx,vector<string>& v){
//     if(idx==original.size()) {
//         v.push_back(ans);
//         return;
//     }   

//     char ch = original[idx];
//     storeSubset(ans+ch,original,idx+1,v);
//     storeSubset(ans,original,idx+1,v);
    

// }

void printArraySubset(int arr[],int n, int idx,vector<int> ans){
    if(idx==n){
        if(idx==n){
            for(int val:ans){
                cout<<val<<" ";

            }
            cout<<endl;
            return;
        }
    }


    printArraySubset(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    printArraySubset(arr,n,idx+1,ans);
}

int main(){
    int arr[3] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;

    printArraySubset(arr, n ,0,v);
}

