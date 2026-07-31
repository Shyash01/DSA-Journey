 #include<iostream>
#include<climits>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows for Array 1: ";
    cin>>m;

    int n;
    cout<<"Enter number of Columns for Array 1: ";
    cin>>n;


    cout<<"Enter array1: "<<endl;

    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];

        }
    }


    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;

    while(minr<=maxr && minc<=maxc){
        for(int j = minc;j<=maxc;j++){
            cout<<arr1[minr][j];
        }
        minr++;

        for(int i=minr;i<=maxr;i++){
            cout<<arr1[i][maxc];
        }
        maxc--;

        for(int j =maxc;j>=minc;j--){
            cout<<arr1[maxr][j];
        }
        maxr--;

        for(int i=maxr;i>=minr;i--){
            cout<<arr1[i][minc];
        }
        minc++;
    }


    

}   
