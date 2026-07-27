
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num_Students;
    cout<<"Enter number of students: ";
    cin >> num_Students;

    cout<<"Enter number of subjects: ";
    int num_sub;
    cin >> num_sub;


    int marks[num_Students][num_sub];
    string students[num_Students];
    string subjects[num_sub];

    for(int i=0;i<num_sub;i++){
        cout<<"Enter Name of subject: ";
        cin>>subjects[i];
    }
    cout<<endl;


    for (int i = 0; i < num_Students; i++)
    {
        cout<<"Enter Name of student: ";
        cin>>students[i];
        cout<<endl;
        cout<<"Enter marks of "<<students[i]<<endl;
        cout<<endl;
        for (int j = 0; j < num_sub; j++)
        {
            cout<<"Enter marks in "<<subjects[j]<<": ";
            cin >> marks[num_Students][num_sub];
        }
        cout<<endl;
    }


    // Printing marks: 

    for (int i = 0; i < num_Students; i++)
    {
        cout<<"Marks of "<<students[i]<<endl;
        for (int j = 0; j < num_sub; j++)
        {
            cout<< "Marks in Subject "<<subjects[j]<<": "<<marks[num_Students][num_sub]<<endl;
        }
        cout<<endl;
    } 

}
