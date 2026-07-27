#include<iostream>
using namespace std;

int main(){
    int arr[3][3];

    // rows ->  3  0-2
    // columns -> 3 0-2

    cout<<arr[0][0]<<endl;  // garbage value as o/[]
    arr[0][0] = 4;
    cout<<arr[0][0];


}