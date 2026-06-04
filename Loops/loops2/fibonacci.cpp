#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int N1 = 1;
    int N2 = 1;
    int Nth = 0;
    
    if(n>=1) cout<<N1<<" ";
    if(n>=2) cout<<N2<<" ";
    for(int i = 3;i<=n;i++){
        
        Nth = N1+N2;
        N1 = N2;
        N2 = Nth;
        cout<<Nth<<" ";
    }
    // if(n == 1 || n == 2) cout<<N1;
    // else cout<<Nth;
}