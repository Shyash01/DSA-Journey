#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {1,7,2,8,4};
    int n = arr.size();
    int temp = arr[0];

    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }

    arr[n-1] = temp;


     for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    

}