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


    int m2;
    cout<<"Enter number of rows for Array 2: ";
    cin>>m2;

    int n2;
    cout<<"Enter number of Columns for Array 2: ";
    cin>>n2;

    if(n1 != m2){
        cout<<"Order Mismatch - Multiplication Not Possible";
    }
    else{
    cout<<"Enter array1: "<<endl;

    int arr1[m1][n1];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            cin>>arr1[i][j];

        }
    }

    cout<<"Enter array 2: "<<endl;

    int arr2[m2][n2];
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            cin>>arr2[i][j];

        }
    }



    int res[m1][n2];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            res[i][j] = 0;
        }
    }


    for(int i = 0;i<m1;i++){
        for(int j=0;j<n2;j++){   // n1 == n2
            for(int k=0;k<n1;k++){
                res[i][j] += (arr1[i][k] * arr2[k][j]);
            }
        }
    }


    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }


}   

}