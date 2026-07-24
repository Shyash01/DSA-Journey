#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

    
//    void sortColors(vector<int>& v) {
//         int n0 =0;
//         int n1 = 0;
//         int n2 = 0;

//         int n = v.size();

//         for(int i=0;i<n;i++){
//             if(v[i]==0) n0++;
//             else if(v[i]==1) n1++;
//             else if(v[i]==2) n2++;
//         }

//         for(int i=0;i<n;i++){
//             if(i<n0) v[i]=0;
//             else if(i<(n0+n1)) v[i]=1;
//             else v[i] = 2;

//         }
//     }
        // int i=0;

        // while(n0>0){
        //     v[i]=0;
        //     i++;
        //     n0--;
        // }

        // while(n1>0){
        //     v[i]=1;
        //     i++;
        //     n1--;
        // }

        // while(n2>0){
        //     v[i]=2;
        //     i++;
        //     n2--;
        // }

        // Dutch Flag Algorithm
        
       void sortColors(vector<int>& v) {
        int l = 0;
        int m = 0;
        int h = v.size()-1;
        int n=v.size();
        
        while(m<=h){
            if(v[m]==2){
                int temp=v[m];
                v[m]=v[h];
                v[h] = temp;

                h--;
            }

            else if(v[m]==0){
                int temp=v[m];
                v[m]=v[l];
                v[l]=temp;
                l++;
                m++;
            }

            else if(v[m]==1){
                m++;
            }
        }

}

int main(){
    vector<int> v = {1,2,0,0,2,2,2,1,1,1,0};

    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    sortColors(v);
    
    cout<<endl;


    // sort(v.begin(),v.end());  // This method can not be used.



    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}