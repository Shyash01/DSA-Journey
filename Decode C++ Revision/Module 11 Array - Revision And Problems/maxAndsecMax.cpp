#include<iostream>
#include<climits>
using namespace std;

int main(){

    
    
    int arr[9] = {8,12,1,4,6,3,8,9,4};

    int max = INT_MIN;
    int secMax = INT_MIN;

    for(int i=0;i<9;i++){
        if(max<arr[i]){
            secMax = max;
            max = arr[i]; 
        }
        if(secMax<arr[i] && arr[i]!=max){
            
            secMax = arr[i];
        }
    }

    cout<<max<<endl<<secMax;
}   