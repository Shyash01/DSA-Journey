#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str = "Raghav is a a good man ";
    vector<string> v;

    stringstream ss(str); 
    string temp;

    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    int n = v.size();
    int maxCount = 0;
    int count =  1;

    if(n==1){
        maxCount = count;
    }else{
    // //     for(int i=0;i<n-1;i++){

    // //     // if(v[i]==v[i+1]){
    // //     //     count++;
    // //     // }
    // //     // else{
    // //     //     if(maxCount<count){
    // //     //         maxCount = count;
    // //     //     }
    // //     //     count = 1;
    // //     // }
        
    // //     // My code
    // //     // if(v[i]!=v[i+1]) count = 1;
    // //     // else{
    // //     //     count++;
    // //     //     if(maxCount<count) maxCount = count;  
    // //     // }    
    // // }


     // Sir's code: 
    for(int i=1;i<v.size();i++){
        if(v[i] ==v[i-1]) count++;
        else count = 1;
        maxCount = max(maxCount,count);
        }
    }

    count = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count =1;
        if(count==maxCount){
            cout<<endl<<v[i]<<" "<<maxCount<<endl;
        }
    }
    
    // // revision 10/08/2026

    // string s;
    // getline(cin,s);

    // vector<string> v;

    // stringstream ss(s);
    // string temp;

    // while(ss>>temp){
    //     v.push_back(temp);
    // }

    // int len = v.size();
    // sort(v.begin(),v.end());

    // if(len==0){
    //     cout<<"String is empty";
    //     return 1;
    // }
   
    // int count = 1;
    // int maxCount = 1;

    // for(int i=0;i<len-1;i++){
    //     if(v[i]==v[i+1]) count++;
    //     else count = 1;
    //     maxCount = max(maxCount,count);
       
    // }

    // count =1;
    // for(int i=0;i<len-1;i++){
    //     if(v[i]==v[i-1]) count++;
    //     else count =1;
    //     if(count==maxCount){
    //         cout<<endl<<v[i]<<" "<<maxCount;
    //     }
    // }

  

    
}