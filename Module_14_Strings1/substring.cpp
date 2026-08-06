#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    // string s = "abcdef";
    // s.substr(idx,length(kitni length leni hai))
    // cout<<s.substr(2,2);

    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    int len = str.size();

    if(len%2!=0){
        cout<<"String is not of even length!\nTry Again!!";
        return 1;
    }
    cout<<str<<endl;
    cout<<str.substr(len/2)<<endl;
 


}


