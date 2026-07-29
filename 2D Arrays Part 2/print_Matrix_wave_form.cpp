 #include<iostream>
#include<climits>
using namespace std;

int main(){
    int m1;
    cout<<"Enter number of rows for Array 1: ";
    cin>>m1;

    int n1;
    cout<<"Enter number of Columns for Array 1: ";
    cin>>n1;


    cout<<"Enter array1: "<<endl;

    int arr1[m1][n1];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            cin>>arr1[i][j];

        }
    }

      for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                if(i%2==0){
                    cout<<arr1[i][j]<<" ";
                }
                else{
                    cout<<arr1[i][n1-1-j]<<" ";
                }
        }
    }
    // }
    // for(int i=0;i<m1;i++){
    //     if(i%2==0){
    //         int j=0;
    //         while(j<n1){
    //             cout<<arr1[i][j]<<" ";
    //             j++;
    //         }
    //     }
    //     else{
    //         int j=n1-1;
    //         while(j>=0){
    //             cout<<arr1[i][j]<<" ";
    //             j--;
    //         }
    //     }
  
    // }



}   
