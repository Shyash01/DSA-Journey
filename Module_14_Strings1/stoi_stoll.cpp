#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "123456789";
    int x = stoi(str);
    cout<<x+1;

    long long x = stoll(str);
    cout<<x;
    cout<<to_string(x);


    // revision 10/08/2026

    // string s = "1223556";
    // int num = stoi(s);
    // cout<<num;

    // string s2 = "12345671234589";
    // long long num2 = stoll(s2);
    // cout<<num2;
}