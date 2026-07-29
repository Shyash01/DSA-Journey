#include<iostream>
#include<climits>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;

    int n;
    cout<<"Enter number of columns: ";
    cin>>n;

    int max = INT_MIN;
    cout<<"Enter array: "<<endl;

    int arr[m][n];
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
            cin>>arr[i][j];
            if(max<arr[i][j]){
                max = arr[i][j];
            }
            sum+=arr[i][j];
        }
    }

    cout<<"Maximum Element in given array is: "<<max<<endl;
    cout<<"Sum of Elements in given array is: "<<sum<<endl;


    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    

}