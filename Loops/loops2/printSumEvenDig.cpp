#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    
    int a = n;
    int sum = 0; 
    while(n>0){
        int lastdigit = n%10;
        
        sum+=(lastdigit%2==0)? lastdigit:0 ;

        n=n/10;
    }

    cout<<sum;
}