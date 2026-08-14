#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1 = {1,1,0,0,1,1,0,1};
    int i=0;
    int j=v1.size()-1;

    while(i<j){

        if(v1[j] ==1) j--;
        if(v1[i] ==0) i++;
        
        if(i>j) break;
        
        if (v1[i]==1&&v1[j]==0) {
            v1[i]=0;
            v1[j]=1;

            i++;
            j--;
        }

    }


    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

}