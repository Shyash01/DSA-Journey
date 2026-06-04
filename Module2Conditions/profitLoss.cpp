#include<iostream>
using namespace std;
int main(){

    float CP, SP;
    //float profit, loss;

    cout<<"Enter CP: ";
    cin>>CP;
    cout<<"Enter SP: ";
    cin>>SP;


    if(SP == CP){
        cout<<"Neither Profit Nor Loss.";
    }else if(SP>CP){
        cout<<"Profit has been made"<<endl;
        //profit = SP - CP;
        cout<<"Profit: "<<SP-CP;
        //cout<<profit;
    }else{
        cout<<"Loss has occured ";
        //loss = CP - SP;
        cout<<"Loss: "<<CP-SP;
        //cout<<loss;
    }
}