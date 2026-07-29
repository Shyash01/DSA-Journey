#include<iostream>
using namespace std;

struct Node{

    int data;
    Node* next;
    Node(int val):data(val),next(nullptr){}

};

void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"nullptr"<<endl;
}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    printList(head);

    return 0;
}

