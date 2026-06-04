#include<iostream>
using namespace std;
int main(){
    
    char ch;
    cout<<"Enter character: ";
    cin>>ch;

    int a = (int)ch;
    int val = a - 64;
    cout<<endl<<val;
}