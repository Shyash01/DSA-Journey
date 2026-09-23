#include<iostream>
using namespace std;


int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        for(int k =i;k<n;k++){
            for(int j=i;j<=k;j++){
                cout<<arr[j];
            }
            cout<<endl;
        }
    }
}






// int main(){
//     int arr[4] = {5,7,2,7};

//     int j =0;
//     while(j<4){
//         int k = 4;
//         while(k>0){
//             int i =j;
//             while(i<k){
//                 cout<<arr[i];
//                 i++;
//             }
//             cout<<" ";
            
//             k--;
//         }
//         j++;
//     }


// }

