#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<string> strs = {"flower","flight","flow"};

    sort(strs.begin(),strs.end());
    
    int len = strs.size();

    if(len==1){
        cout<<strs[0];
        return 1;
    }

    string first = strs[0];
    string last = strs[len-1];

    string s = "";
    
    int terminator = min(first.size(),last.size());

    for(int i=0;i<terminator;i++){
        if(first[i]==last[i]){
            s+=first[i];
        }
        else break;
    }

    cout<<"Longest common substring is: "<<s;
}   