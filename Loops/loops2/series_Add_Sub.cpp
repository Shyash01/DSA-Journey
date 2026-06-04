#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    int sum = 0;

    // for(int i =1; i<=num; i++){
    //     if(i%2!=0)  sum+=i;
    //     else sum-=i;
    // }

    if(num%2) sum = -num/2;
    else sum = (-num/2) + num;
    cout<<"Sum: "<<sum;
}