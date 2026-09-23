#include<iostream>
using namespace std;

int hcf(int a, int b){
    if(max(b,a)%min(a,b) == 0) return min(a,b);
    for(int i=min(a,b)/2+1;i>=2;i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}
int main(){
    int a = 3;
    int b = 6;
    cout<<hcf(a,b);    
}