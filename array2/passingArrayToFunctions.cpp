#include<iostream>
using namespace std;
//void display(int *a,int size) // can also write like this
void display(int a[],int size){ // Spacifying size in arr [size] is not required to give 
                                //during function declaration array parameter    
                                // During passing of array, size as a separate variable must be sent, otherwise not works.
    // int size = sizeof(a)/sizeof(a[0]);//will return size of 'int*


    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

void change(int b[],int size){ // int b[] array nahi ek pointer hai, int*b 
    b[0] = 100; // C hange is done in the arr itself. 
}

int main(){
    int arr[5] = {1,4,2,7,46};
    
    // 1. Check Accessing the elements of array in another function
    // 2. Updation, pass by value / reference?

    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size); // & is not required to write. 
    change(arr,size);
    display(arr,size);

     
}