#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1 = {1,-2,3,-4,-5,6,8};
    int i=0;
    int j=v1.size()-1;

    while(i<j){

        if(v1[j]>0) j--;
        if(v1[i] <0) i++;
        
        if(i>j) break;
        
        if (v1[i]>0&&v1[j]<0) {
            swap(v1[i],v1[j]);

            i++;
            j--;
        }

    }


    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

}