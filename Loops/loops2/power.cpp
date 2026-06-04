#include<iostream>
using namespace std;
int main(){
    int e,b;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"Enter exponenet: ";
    cin>>e;

    float power = 1;
    int E;
    bool flag = true; // true -> power positive
    if(e<0){
        flag = false; // false -> negative power
        e = -e;
    }
    for(int i = 1; i<=e; i++){
        power = power *b;
    }
    if(flag == false){
        power = 1/(power);
        e = -e;
    }

    if(e==0 && b== 0) cout<<"Not defined";
    else cout<<b<<" raised to power "<<e<<" is "<<power;
}