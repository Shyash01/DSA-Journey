 #include<iostream>
#include<climits>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows And Columns: ";
    cin>>m;

  


    cout<<"Enter array: "<<endl;

    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];

        }
    }



     for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            if(i!=j){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
           
        }
        cout<<endl;
    }
    

    
    //  for(int i=0;i<m;i++){
    //     for(int j=i+1;j<m;j++){
    //         if(i!=j){
    //             int temp = arr[i][j];
    //             arr[i][j] = arr[j][i];
    //             arr[j][i] = temp;
    //         }
           
    //     }
    //     cout<<endl;
    // }


    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}