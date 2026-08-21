#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    int j = 0;
    for(int i=0;i<3;i++){
        if(i%2 !=0){
            j=2;
            while(j>=0){
                cout<<arr[i][j]<<" ";
                j--;
            }
        }
        else{
            j=0;
            while(j<3){
                cout<<arr[i][j]<<" ";
                j++;
            }
            
        }
    }
}