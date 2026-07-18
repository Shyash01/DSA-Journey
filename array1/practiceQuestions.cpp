#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cout<<endl;

    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }   

    cout<<endl<<sum<<endl;
}   