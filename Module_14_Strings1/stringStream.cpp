#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str = "rarghav    is   a  maths teacher";
    stringstream ss(str); 
    string temp;
    int count = 0;
    while(ss >> temp){
        count++;
        cout<<temp<<endl;
    }

    cout<<"Total word count is: "<<count;
    
}