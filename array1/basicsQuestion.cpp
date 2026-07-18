#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    cout<<endl;
 
    int marks[n];
    cout<<"Enter marks of students: ";

    for(int i =0;i<n;i++){
        cin>>marks[i];
    }

     for(int i =0;i<10;i++){
          if(marks[i]<35){
            cout<<i+1<<" ";
          }
    }

}   