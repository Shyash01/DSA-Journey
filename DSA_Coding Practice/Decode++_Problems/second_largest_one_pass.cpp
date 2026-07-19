// Q2. Find the second largest element in the given Array in one pass.

#include<bits/stdc++.h>
using namespace std;

int secondMax(array<int,5> arr){

    int max = INT_MIN;
    int secMax = INT_MIN;

    int n = arr.size();

    for(int i =0;i<n;i++){
        if(arr[i]>max){
            
            secMax = max;
            max=arr[i];
        }
        else if(arr[i]!=max && arr[i]>secMax){ 
        secMax = arr[i];
        }
    }
    


    // Use loop for double pass
    
    // for(int i =0;i<n;i++){

        // if(arr[i]!=max && arr[i]>secMax){
        //     secMax = arr[i];
        // }

    // }

    return secMax;
}

int main(){                                                                                                         

    array<int,5> arr = {-2,-1,-5,-9,-3};
    
    int res = secondMax(arr);
    cout<<"Second Largest Element is: "<<res;

}