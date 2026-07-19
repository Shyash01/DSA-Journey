// #include<iostream>
// using namespace std;

// void find(int n, int* ptr1, int* ptr2){
//     *ptr2 = n%10;
//     while(n>9 || (n%10==0)){
//         n/=10;
//     }
//     *ptr1 = n;
//     return;
// }

// int main(){
//     int n;
//     cin>>n;
//     int firstDigit, lastDigit;
//     int *ptr1 = &firstDigit;
//     int *ptr2 = &lastDigit;
    
//     find(n, ptr1, ptr2);

//     cout<<firstDigit<<" "<<lastDigit;
// }



// Revision Done 

#include<iostream>
using namespace std;

void firstAndLastDig(int *ptr1, int *ptr2,int num){
    *ptr2 = num%10;
    
    while(num>9 || (num%10==0)){
        num /=10;
    }

    *ptr1 = num;
    return;
}

int main(){
    int num;
    cin>>num;

    int fdig,ldig;

    int *ptr1 = &fdig;
    int *ptr2 = &ldig;

    firstAndLastDig(ptr1,ptr2,num);
    cout<<fdig<<endl<<ldig;

}