#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;

    //int a = (int)ch;
    if(ch>=65 && ch<=90){
        cout<<"Its an alphabet -> Upper Case alphabet";
    }
    if(ch>=97 && ch<=122){
        cout<<"Its an -> Lower Case alphabet";
    }else{
        cout<<"It is not an alphabet";
    }
    //if(a>=65 && a<=90 || a>=97 && a<=122){
}