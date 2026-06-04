#include<iostream>
using namespace std;
int main(){
    int i =0;
    while(i<26){
        cout<<"The ASCII value of "<<(char)(i+'A')<<" is "<<(int)(i+'A')<<endl;
        i++;
    }
}