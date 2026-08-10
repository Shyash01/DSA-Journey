#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    // str.size() & // str.length()

    // string str = "Raghav Garg is at PW";
    // cout<<str.size()<<endl;
    // int size = str.size();   
    // cout<<size<<endl;
    // cout<<str.length();   // 0 to str.length()-1
      

    // push_back()

    // string str = "abcd";

    // cout<<str<<endl;

    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // str.push_back("def"); gives error
    // cout<<str<<endl;

    // pop_back()
    // string str = "abcd";
    // cout<<str<<endl;
    // str.pop_back();
    // str.pop_back();
    // cout<<str<<endl;

    // + Operator

    // string s = "abc";
    // cout<<s<<endl;

    // string t = "def";
    // s=s+t;
    // s = s+"def";
    // s =  s+"abc";
    // s = s+'a';
    // s = s+123;
    // s = "def" + s;
    // s = s+s;
    // cout<<s;

    // reverse()

    // string str = "abcdef";
    // cout<<str<<endl;
    // reverse(str.begin(),str.end());
    // cout<<str;

    string s = "Yash";
    s.push_back('a');
    cout<<s;
    s.pop_back();
    cout<<endl<<s;
}