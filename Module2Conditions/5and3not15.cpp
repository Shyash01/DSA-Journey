#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter an number: ";
    cin>>num;
    // if((num%3 ==0 || num%5 ==0) && (num%15 != 0) ){
    //     cout<<"Divisible by 3 or 5 but not by 15";
    // }else{
    //     cout<<"Divisible by 3 and divisible by 5 also divisible by 15";
    // }


    if(num%3 ==0 || num%5 ==0){
        if(num%15 !=0){
            cout<<"Matching conditions";
        }
        else{
            cout<<"Not matching conditions";
        }
    }else{
        cout<<"Not matching conditions";
    }
    return 0;
    
}