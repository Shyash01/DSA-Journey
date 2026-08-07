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

}