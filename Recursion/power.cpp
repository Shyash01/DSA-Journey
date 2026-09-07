#include<iostream>
using namespace std;

int power(int a,int b){
    if(a==0 && b==0) return -100;
    if(b==0) return 1;
    int p =1;
    for(int i=0;i<b;i++){
        p*=a;
    }
    return p;
}
int powerRic(int a, int b){
    if(a==0 && b==0) return -100;
    if(b==0) return 1;

    return a * powerRic(a,b-1);
}

int main(){
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;

    cout<<"Enter value of b: ";
    cin>>b;

    // cout<<endl;
    // cout<<power(a,b);
    
    cout<<endl<<powerRic(a,b);

}