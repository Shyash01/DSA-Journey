#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    //typecasting in string is not allowed: 
    int n = 10;
    string s=to_string(n);
    int len = s.size();
    cout<<len;
}


