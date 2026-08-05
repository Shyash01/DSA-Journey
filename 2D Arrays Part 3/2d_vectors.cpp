#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    // vector<int>

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    
    // v1 vector
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    // v2 vector
    v2.push_back(4);
    v2.push_back(5);

    // v3 vector
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);


    vector< vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<< v[0][0];

    

}