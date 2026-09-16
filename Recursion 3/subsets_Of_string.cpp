#include<iostream>
#include<string>
#include<vector>

using namespace std;

// void printSubset(string ans, string original){
//     if(original.size()==0) {
//         cout<<ans<<endl;
//         return;
//     }   

//     char ch = original[0];
//     printSubset(ans+ch,original.substr(1) );
//     printSubset(ans,original.substr(1) );
    

// }
// void printSubset2(string ans, string original,int idx){
//     if(idx==original.size()) {
//         cout<<ans<<endl;
//         return;
//     }   

//     char ch = original[idx];
//     printSubset2(ans+ch,original,idx+1);
//     printSubset2(ans,original,idx+1);
    

// }

void storeSubset(string ans, string original,int idx,vector<string>& v){
    if(idx==original.size()) {
        v.push_back(ans);
        return;
    }   

    char ch = original[idx];
    storeSubset(ans+ch,original,idx+1,v);
    storeSubset(ans,original,idx+1,v);
    

}

int main(){

    string str = "abc";
    // printSubset("",str);
    vector<string>v;
    // printSubset2("",str,0);
    storeSubset("",str,0,v);

    for(string idx:v){
        cout<<idx<<endl;
    }
}

