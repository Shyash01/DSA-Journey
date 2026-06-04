#include<iostream>
using namespace std;

// int factorial(int n){
//     int fact = 1;
//     for(int i =2;i<=n;i++){
//         fact*=i;
//     }

//     return fact;
// }

int main(){
    int n;
    cin>>n;
    
    int fact = 1;
    for(int i =1;i<=n;i++){
    // cout<<"factorial of "<<i<<" is: "<<factorial(i)<<endl;
     fact *=i;
     cout<<"factorial of "<<i<<" is: "<<fact<<endl;
    }

}