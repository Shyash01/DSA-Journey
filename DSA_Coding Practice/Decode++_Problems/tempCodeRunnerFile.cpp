// Q4. Given an array, predict if the array contains duplicates or not.

#include<iostream>
#include<array>
using namespace std;

bool chkDuplicate(array<int,5> arr){
    bool chk = false;
    int n = arr.size();

    for(int i = 0; i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j]){
                chk = true;
            }
        }
    }
    return chk;

}

int main(){
    array<int,5> arr = {1,2,3,4,5};

    bool chk = chkDuplicate(arr);

    if(chk){
        cout<<"Duplicate Exisits";
    }
    else{
        cout<<"Duplicate Does not exists";
    }
    
}