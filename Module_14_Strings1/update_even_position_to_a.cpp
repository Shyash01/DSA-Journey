#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    cin>>n;
    char s[n+1];
    for(int i=0;i<n;i++){
        cin>>s[i];
       
    }
    s[n] = '\0';
    cout<<s<<endl;

     for(int i=0;i<n;i++){
        if(i%2==0){
            s[i] ='a';
        }
    }


    cout<<s;

    return 0;
}