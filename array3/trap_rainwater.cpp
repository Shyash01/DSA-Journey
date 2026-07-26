#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

// Optimized Soltution -> Removed next and previous
    int trap(vector<int>& height) {
         int n = height.size();

        // prev greatest element array
        vector<int>prev(n);
        prev[0] = -1;
        int max1 = height[0];
        for(int i =1;i<n;i++){
            prev[i] = max1;
            if(max1<height[i]) max1 = height[i];
        }

        // next greatest element array -> prev as next -> calculation of minimum
        prev[n-1] = -1;
        max1 = height[n-1];
        for(int i = n-2;i>=0;i--){
            if(max1<prev[i]) prev[i] = max1;
            if(max1<height[i]) max1 = height[i];
        }

        
        int water = 0;

        for(int i=1;i<n-1;i++){

            if(height[i]<prev[i]){
                water += prev[i]-height[i];
            }
            
        }


    return water;
    }

    // Unoptimized solution: 

    // int trap(vector<int>& height) {
    //      int n = height.size();


    //     vector<int>arr(n);
    //     arr[0] = -1;
    //     int max1 = height[0];
    //     for(int i =0;i<n;i++){
    //         arr[i] = max1;
    //         if(max1<height[i]) max1 = height[i];
    //     }

    //     // next greatest element array -> prev as next

    //     vector<int>brr(n);
    //     brr[n-1] = -1;
    //     int max2 = height[n-1];
    //     for(int i =n-2;i>=0;i--){
    //         brr[i] = max2;
    //         if(max2<height[i]) max2 = height[i];
    //     }

        
    //     int water = 0;

    //     for(int i=1;i<n-1;i++){
    //         int mini = min(arr[i],brr[i]);

    //         if((mini-height[i])>=0){
    //             water += mini-height[i];
    //         }
            
    //     }


    // return water;
    // }


int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout<<trap(height);
}
