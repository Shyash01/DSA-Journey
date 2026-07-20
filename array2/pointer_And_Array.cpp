#include<iostream>
using namespace std;

int main(){
    int arr[] = {4,2,6,1,7};
    
    int* ptr = arr; // giving address, this gives ptr ability to be used as an array itself.
    // ptr can exess/modify entire array
    // cout<<ptr<<endl;
    // cout<<&arr[0]<<endl;

    // cout<<ptr[0]<<endl;
    // ptr[0] = 8; // * is not required, i.e. derefence operator is not required in case of array to access/modify element

    // int size=sizeof(ptr)/sizeof(ptr[0]); // Gives Size only 1
    // cout<<size<<endl;
    for(int i =0;i<5;i++){ 
        cout<<ptr[i]<<" ";
    }

    cout<<endl;
    //Another way to print array
   *ptr=8;
    ptr++;
   *ptr = 9;
   ptr--;
   

     for(int i =0;i<5;i++){ 
        cout<<ptr[i]<<" ";
    }

    cout<<endl;
    for(int i =0;i<5;i++){ 
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; // Likhna jaruri hai taaki wapas se ptr points to first element of array, otherwise its ptr gets lost/out of bound

}

 
