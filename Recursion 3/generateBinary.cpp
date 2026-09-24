#include<iostream>
using namespace std;

void generate(string s,int n){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    } 

    generate(s+"0",n);
    if(s=="" || s[s.size()-1]!='1') generate(s+"1",n);
}
int main(){
    int n =4;
    generate("",n);
}