#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Enter number of elements in array: ";
    int n;
    cin>>n;
    cout<<endl;

    int arr[n];
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   

   int max = INT_MIN;

    for(int i=0;i<n;i++){
       if(arr[i]>max){
        max = arr[i];
       }
    }

    cout<<max;

   
}   