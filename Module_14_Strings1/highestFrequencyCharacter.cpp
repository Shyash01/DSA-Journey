#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    //  string s = "raghavgarg";
     // 2

    // int count = 0;
    // int max=0;
    // int n = s.size();

    //  for(int i=0;i<n;i++){
    //     char ch = s[i];
    //     int count = 1;

    //     for(int j=i+1;j<n;j++){
    //         if(s[j]==s[i]){
    //             count++;
    //         }
    //     }
    //     if(max<count){
    //         max = count;
    //     }
    //  } 

    //  for(int i=0;i<n;i++){
    //     char ch = s[i];
    //     int count = 1;

    //     for(int j=i+1;j<n;j++){
    //         if(s[j]==s[i]){
    //             count++;
    //         }
    //     }
    //     if(count==max){
    //         cout<<ch<<" "<<max<<endl;
    //     }
    //  }

    string s = "aabbaababaaasxwe87tgfai";
    int arr[26]={0};
    int n=s.length();


    for(int i=0;i<n;i++){

        char ch = s[i];
        int idx = (int)ch;
        // cout<<ch<<endl;
        arr[idx-97]++;
    }

    int max = 0;
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    for(int i=0;i<26;i++){
        if(max==arr[i]){
            int ascii = arr[i]+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<max<<endl;
        }
    }

    
}