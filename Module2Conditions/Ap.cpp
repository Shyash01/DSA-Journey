#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter number: ";
     cin>>n;

    //  Mathematics way
    //  for(int i = 1; i<=(2*n-1);i+=2){
    //     cout<<i<<endl;
    //  }

    //  Coding Way
    // 1 3 5 7 9...
    // 4 7 10 13 16...
    int a = 1;
    for(int i =1;i<=n;i++){
        cout<<a<<" ";
        a+=3;
    }
    
}