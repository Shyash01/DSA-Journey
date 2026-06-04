#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Character: ";
    cin>>ch;

    int val = (int)ch;

    if((val>=65 && val <= 90) || (val>=97 && val<=122)){
        if(  ch =='A'|| ch =='E'|| ch =='I'|| ch =='O'|| ch =='U'|| ch =='a'||ch =='e'||ch =='i'||ch =='o'||ch =='u'){
            cout<<"Vowel";
        }
        else{
            cout<<"Consonant";
        }
    }else{
        cout<<"Not an alphabet";
    }

}