#include<iostream>
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

    int target;
    cout<<"Enter Target: ";
    cin>>target;
    bool found = false;
    int position;
    
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            found = true;
            position = i;
            break; //If not want duplicate to be printed. 
        }
    }

    if(found){
         cout<<"Element "<<target<<" is at "<<position<<" position"<<endl;
    }
    else{
        cout<<"Element not found";
    }
}   