#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "123456789";
    // int x = stoi(str);
    // cout<<x+1;

    long long x = stoll(str);
    cout<<x;
    cout<<to_string(x);

}