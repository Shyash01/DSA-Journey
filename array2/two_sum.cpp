#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    int x;
    cout<<"Enter target: ";
    cin>>x;

  

    int n;
    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }



     
}