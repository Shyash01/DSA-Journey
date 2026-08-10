#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string s;
    getline(cin, s);
    int n = s.length();
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (n == 1)
        {

            break;
        }

        if(n==2 && s[0]!=s[1]){
            count =1;
            break;
        }

        if (i == 0)
        {
            if (s[i] != s[i + 1])
            {
                count++;
            }
        }

        else if (i == n - 1)
        {
            if (s[i] != s[i - 1])
                count++;
        }

        else if (s[i] != s[i - 1] && s[i] != s[i + 1])
        {
            count++;
        }
    }
    cout << count;

    // // revision 10/08/26

    // string s;
    // getline(cin,s);

    // int len = s.length();
    // int count = 0;

    // for(int i =0;i<len;i++){
    //     if(len ==1){
    //         break;
    //     }

    //     else if(len==2){
    //         if(s[i]!=s[i+1]){
    //             count++;
    //             break;
    //         }
    //     }
        
    //     else if(i==len-1){
    //         if(s[i]!=s[i-1]){
    //             count++;
    //         }
    //     }
        
    //     else if(s[i]!=s[i-1] && s[i]!=s[i+1]){
    //         count++;
    //     }
    // }
    // cout<<count;

}
