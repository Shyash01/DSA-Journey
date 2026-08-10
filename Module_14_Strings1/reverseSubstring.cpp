#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    // string str;
    // getline(cin,str);
    // // reverse first half
    // int len = str.size();
    // if(len<6){
    //     cout<<"Try Again! \nEnter string greater than size 5";
    //     return 0;
    // }

    // cout<<str<<endl;
    // reverse(str.begin()+1,str.begin()+5);
    // cout<<str;


    string s;
    getline(cin,s);

    int len = s.size();

    if(len<6){
        cout<<"Try Again! \nString should be greater than 5 length";
        return 0;
    }
    reverse(s.begin()+1,s.begin()+5);
    cout<<s;
    return 0;

}


// #include <iostream>

// int main() {
//     const int MAX_SIZE = 10; // Predefined array size
//     char c_str[MAX_SIZE];

//     std::cout << "Enter a text line: ";
//     // Safely reads up to 9 characters and appends '\0'
//     std::cin.getline(c_str, MAX_SIZE); 

//     std::cout << "Stored array: " << c_str << std::endl;
//     return 0;
// }