#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str;
    getline(cin,str);
    // reverse first half
    int len = str.size();

    cout<<str<<endl;
    reverse(str.begin(),str.begin()+len/2);
    cout<<str;


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