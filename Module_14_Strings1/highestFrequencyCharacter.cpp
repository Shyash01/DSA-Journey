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


    // More optimized version -> down 
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

    // //10/8/26 revision

    // string s;
    // getline(cin,s);
    // int arr[26] = {0};
   
    // int len = s.size();
    // for(int i=0;i<len;i++){
        
    //     int idx = (int)s[i];
        
    //     arr[idx-97]++;
    // }

    // int max = 0;
    // int idx;

    // for(int i=0;i<26;i++){
    //      if(max<arr[i]){
    //         max = arr[i]; 
    //         idx = i;
    //     }
        
    // }

    // cout<<max<<" "<<(char)(97+idx);

}