#include<iostream>
#include<vector>
using namespace std;


int main(){
    // vector<int> v(5,2);
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<" ";
    
    vector<vector<int> > v(3, vector<int> (3));
    
    vector<vector<int> > v1(3, vector<int> (3));


    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<v.size()<<endl;
    cout<<v[0].size()<<endl;

}