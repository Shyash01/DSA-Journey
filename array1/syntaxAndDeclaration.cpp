#include<iostream>
using namespace std;

int main(){
    int arr[7]; // 0 1 2 3 4 5 6
    // arr[0] = 7;
    // arr[1] = 7;
    // arr[2] = 7;
    // arr[3] = 7;
    // arr[4] = 7;
    // arr[5] = 7;
    // arr[6] = 7;

    // int arr[7] = {1,2,4,5,6,7,8};  // access size error is prompted if elements are increased in an array
    // cout<<arr[6];

    int arr1[7];
    
    for(int i = 0;i<=6;i++){
        cin>>arr1[i];
    }

    for(int i = 0;i<=6;i++){
        cout<<arr1[i]<<" ";
    }

}   