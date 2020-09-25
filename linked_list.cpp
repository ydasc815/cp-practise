// LinkedLists
// Creating a simple linkedlist in cpp

#include<bits/stdc++.h>
#define null NULL
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

// void push(Node** headRef, int data){
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = *headRef;
//     *headRef = newNode;
// }
int main(){
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    // above code declares three nodes - objects of the linkedlist
    first->data = 2; // assigns data to first node
    first->next = second; // assigns next pointer to first node [first->second]

    second->data = 1; // assigns data to second node
    second->next = third; // assigns next pointer to second node [second->third]

    third->data = 3;
    third->next = null;
    // by now the linkedlist has been created

    // to traverse a linkedlist, it is sufficient to know the details of the head node of the linkedlist
    while(first != null){
        cout<<first->data<<" ";
        first = first->next;
    }
    cout<<"\n";

    // adding a new node to the start of the linkedlist
    Node* newHead = new Node();
    newHead->data = 4;
    newHead->next = first;
    first = newHead;

    // Testing git here


}