#include<iostream>
#include<vector>
using namespace std;

int firstNonRepeating(vector<int> & arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        int repeated = false;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                repeated = true;
                break;
            }
        }
        if(!repeated){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    vector<int> arr = { 4,3,2,1,4,3,0,2,6,8};

    cout<<"The first Non repeating element is: "<<firstNonRepeating(arr);

}