#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    cout<<"Enter length: ";
    cin>>n;
    char str [n];

    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    
    cout<<str<<endl;
    int i=0;
    while(str[i]!=0){
        if(i%2==0){
            str[i] = 'o';
        }
        i++;
    }
    cout<<str[n]<<endl;
}