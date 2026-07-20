#include<iostream>
using namespace std;

void display(int a[]){ // size is not required to give during function declaration array parameter
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int arr[] = {1,4,2,7,4};
    
    // 1. Check Accessing the elements of array in another function
    // 2. Updation, pass by value / reference?

    display(arr);

}