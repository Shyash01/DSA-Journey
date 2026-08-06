#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string s = "PhysicsWallah";
    string t = "WallahPhysics";
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t )
        cout<<"Yes both are anagrams"<<endl;
    else 
        cout<<"Not Anagrams";
   

}
