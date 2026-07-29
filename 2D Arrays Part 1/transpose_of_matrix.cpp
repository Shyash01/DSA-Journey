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


    cout<<"Enter array: "<<endl;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];

        }
    }

    int trans[n][m];

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[i][j] = arr[j][i];
        }
        cout<<endl;
    }
    

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    

}