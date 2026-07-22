// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

void display(vector <int>&a){
    for(int i =0;i<a.size();i++){
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
}

void reversePart(int i, int j,vector<int> & a){
    while(i<=j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }

}
int main(){
    vector<int> v1 = {1,3,2,4,3,4,1,6};

    display(v1);

    // int i=0;
    // int j=v1.size()-1;

    // while(i<j){
    //     int temp = v1[i];
    //     v1[i] = v1[j];
    //     v1[j] = temp;
    //     i++;
    //     j--;
    // }

    // reverse(v1.begin(),v1.end()); // In built function
    int i;
    cout<<"Enter first index: ";
    cin>>i;

    int j;
    cout<<"Enter last index: ";
    cin>>j;

    reversePart(i,j,v1);

    display(v1);
}