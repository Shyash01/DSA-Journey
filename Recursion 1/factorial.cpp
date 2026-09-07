#include<iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f=f*i;
    }
    return f;
}

void factUpto(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
        cout<<f<<endl;
    }

}

int main(){
    factUpto(5);
}