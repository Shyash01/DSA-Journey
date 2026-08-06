#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string s;
    // cin>>s;

    getline(cin, s);
    // raghav garg is a maths teacher
   
    sort(s.begin(),s.end());
    cout<<s<<endl;
   

}
