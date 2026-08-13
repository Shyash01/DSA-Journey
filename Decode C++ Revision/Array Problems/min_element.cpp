// Q3. Find the minimum value out of all elements in the array.

#include<iostream>
#include<array>
#include<climits>
using namespace std;


int minElement(array<int,5> arr){
    int minElement = INT_MAX;
    int n = arr.size();

    for(int i =0;i<n;i++){
        if(arr[i]<minElement){
            minElement = arr[i];
        }
    }

    return minElement;
}

int main(){
    array<int,5> arr = {-2,-1,-5,-9,-3};
    
    int res = minElement(arr);
    cout<<"Minimum element is: "<<res;
}