#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // you need not to mention size

    // push_back operation

    // v[0] = 6;
    // v[1] = 1;    Gives segmentation fault because can not access element by using index value
    //  v[2] = 9;   As before pushbak operation the size of vector is 0, that's why index doesn not refers to a placeholder
    // v[3] = 8;

    //  for inserting / for taking input do not use [] or index value
    // if the size is not given
    
    v.push_back(6);
    // cout << v.size() << endl;
    cout << v.capacity() << endl;

    v.push_back(1);
    // cout << v.size() << endl;
    cout << v.capacity() << endl;

    // v[1] = 1; // Incase if we start the
    v.push_back(9);
    // cout << v.size() << endl; // Finds total size upto current state exists
    cout << v.capacity() << endl;// Finds total Capacity upto current state exists

    v.push_back(10);
    // cout << v.size() << endl;
    cout << v.capacity() << endl;
    // if you want to access / update use [] or index values.
    // cout<<v[0]<<" ";
    //     cout<<v[1]<<" ";
    //     cout<<v[2]<<" ";
    //     cout<<v[3]<<" ";

    // Print Capacity

    
    
    


}