#include <bits/stdc++.h>
using namespace std;

int main(){

    array<int,5> arr = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n = arr.size();
    int prod = 1;
    for(int i=0;i<size;i++){
        prod*=arr[i];
    }

    cout<<prod;
}