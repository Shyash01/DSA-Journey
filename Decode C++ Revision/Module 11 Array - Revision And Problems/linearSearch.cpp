#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter array size: ";
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter element to search: ";
    cin>>x;

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Element "<<arr[i]<<" is at "<<i<<" index";
            break;
        }
    }
}   