#include<iostream>
#include<string>
#include<climits>
using namespace std;

int main(){
   cout<<stoi("000102")<<endl;
   string arr[] = {"0123","0023","456","00182","940","002901"};

   int max = INT_MIN;
    int idx =0;
    string maxS = arr[0];

   for(int i=0;i<6;i++){
        int x = stoll(arr[i]);
        if(x>max){
            max = x;
            idx = i;
            maxS = arr[i];
        }

   }
   cout<<max<<" "<<"At idx: "<<idx<<" max String is: "<<maxS;


    // revision 10/08/2026
    // string arr[] = {"0123","0023","456","00182","940","002901"}; 
    // int len = sizeof(arr)/sizeof(arr[0]);

    // long long max = LLONG_MIN;
    // int idx=0;
    // string val;

    // for(int i=0;i<len;i++){
    //     long long x = stoll(arr[i]);

    //     if(max<x){
    //         max = x;
    //         idx = i;
    //         val = arr[i];
    //     }
    // }

    // cout<<"The maximum value is: "<<val<<" And its idx is: "<<idx;
    
    
}   