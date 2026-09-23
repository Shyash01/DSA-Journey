#include<iostream>
using namespace std;
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;

    return;
}


int main(){
    int a, b;
    cin>>a;
    cin>>b;

    int* x = &a;
    int* y = &b;
    
    
    cout<<x<<" "<<y<<endl;
    swap(x,y); 
    //swap(&a,&b);
    cout<<x<<" "<<y;
}