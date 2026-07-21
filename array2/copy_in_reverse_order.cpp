#include<iostream>
#include<vector>

using namespace std;

void display(vector <int>&a){
    for(int i =0;i<a.size();i++){
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
}
int main(){
    vector<int> v1 = {1,3,2,4,3,4,1,6};

    display(v1);


    vector <int> v2(v1.size());

    for(int i=v1.size()-1;i>=0;i--){
        v2[(v1.size()-1)-i] = v1[i];
    }

    display(v2);

}