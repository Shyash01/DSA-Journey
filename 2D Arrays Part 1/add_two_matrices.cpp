#include<iostream>
#include<climits>
using namespace std;

int main(){
    cout<<"Enter Dimensions of matrices 1: "<<endl;
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;

    int n;
    cout<<"Enter number of columns: ";
    cin>>n;

    cout<<endl;

    cout<<"Enter Dimensions of matrices 2: "<<endl;

    int p;
    cout<<"Enter number of rows: ";
    cin>>p;

    int q;
    cout<<"Enter number of columns: ";
    cin>>q;


    int arr[m][n];
    int brr[p][q];

    if(m==p&&n==q){
        cout<<"Enter elements in array 1"<<endl;
        int sum[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            cin>>arr[i][j];
            }
        }
        cout<<"Enter elements in array 2"<<endl;

        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
            cin>>brr[i][j];
            cout<<arr[i][j]+brr[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else{
        cout<<"Addition is not possible, order is not correct";
    }
    
}