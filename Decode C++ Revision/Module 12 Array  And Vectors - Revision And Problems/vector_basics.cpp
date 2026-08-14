#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // you need not to mention size

    // push_back operation

    v.push_back(5);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"----------------"<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"----------------"<<endl;
    v.push_back(3);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;    
}