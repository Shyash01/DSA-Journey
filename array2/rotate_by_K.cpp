#include<iostream>
#include<vector>
// #include<algorithm>
// #include<bits/stdc++.h>

using namespace std;

void display(vector<int> & a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reverse_part(int i, int j, vector<int>& a){

    while(i<j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
         i++;
        j--;
    }

   
}


int main(){
    vector<int> v = {1,6,2,3,7,4,8};

    int k;
    cout<<"Rotate By: ";
    cin>>k;

    int n = v.size();
    if(n==0) return 0;


    if(k>n){
        k=k%n;
    }

    reverse_part(0,n-k-1,v);
    reverse_part(n-k,n-1,v);
    reverse_part(0,n-1,v);
    display(v);


}











// Rotation using reversing -> My solution
// // #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<algorithm>


// using namespace std;

// void display(vector <int>&a){
//     for(int i =0;i<a.size();i++){
//         cout<<a[i]<<" ";
        
//     }
//     cout<<endl;
// }

// void reversePart(int i,int k,vector<int> & a){

//     int j = k;
//     while(i<j){
//         int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;

//         i++;
//         j--;
//     }

// }
// int main(){
//     vector<int> v1 = {1,3,2,4,3,4,1,6};

//     display(v1);

//     int k;
//     cout<<"Enter Rotate Value: ";
//     cin>>k;


//     reversePart(0,v1.size()-1,v1);
//     display(v1);
//     cout<<endl;

//     reversePart(0,k-1,v1);
//     display(v1);
//     cout<<endl;
//     reversePart(k,v1.size()-1,v1);

//     display(v1);
// }




// // #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<algorithm>


// using namespace std;

// void display(vector <int>&a){
//     for(int i =0;i<a.size();i++){
//         cout<<a[i]<<" ";
        
//     }
//     cout<<endl;
// }

// // void reversePart(int i, int j,vector<int> & a){
// //     while(i<=j){
// //         int temp = a[i];
// //         a[i] = a[j];
// //         a[j] = temp;

// //         i++;
// //         j--;
// //     }

// // }

// // My Rotate O(N*K) -> Costly Solution

// void rotate(vector<int>& a,int k){
//     int n = a.size();
//     if(n<=1) return;

//     k = k % n;
//     if(k==0) return;
//     int x = a.size()-1;
//     while(k>0){
//         int temp = a[x];
//         cout<<temp<<endl;
//         for(int i=0;i<=x;i++){
//             if(x-i==0){
//                 a[0] = temp;
//                 break;
//             }
            
//             a[x-i] = a[x-i-1];
//         }
//         k--;
//     }
// }
// int main(){
//     vector<int> v1 = {1,2};

//     display(v1);

//     // int i;
//     // cout<<"Enter first index: ";
//     // cin>>i;

//     // int j;
//     // cout<<"Enter last index: ";
//     // cin>>j;

//     // reversePart(i,j,v1);
//     int k;
//     cout<<"Enter rotate: ";
//     cin>>k;
//     rotate(v1,k);
//     display(v1);

// }   