// LinkedLists
// Creating a simple linkedlist in cpp

// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;
// };

// int main(){
//     Node* first = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* newNode = new Node(); // Initializing a new Node
//     Node* head = newNode;
//     // above code declares three nodes - objects of the linkedlist
//     first->data = 2; // assigns data to first node
//     first->next = second; // assigns next pointer to first node [first->second]

//     second->data = 1; // assigns data to second node
//     second->next = third; // assigns next pointer to second node [second->third]

//     third->data = 3;
//     third->next = null;
//     // by now the linkedlist has been created
//     newNode->data = 5;
//     newNode->next = first;
//     //first = newNode;

//     // to traverse a linkedlist, it is sufficient to know the details of the head node of the linkedlist
//     while(head != null){
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     cout<<"\n";

// }

// // Implementing linkedlist by non repeating node definitions
// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
// };

// void printList(Node* head){
//     while(head != null){
//         cout<<head->data<<" ";
//         head = head->next;
//     }
// }

// void addDataToFront(Node* head, int data){
//     if(head == null){
//         head = new Node();
//         head->data = data;
//         head->next = null;
//     } else{
//         Node* newNode = new Node();
//         newNode->data = data;
//         newNode->next = head;
//         head = newNode;
//     }
// }

// int main(){
//     Node* head;
//     addDataToFront(head, 1);
//     addDataToFront(head, 2);
//     addDataToFront(head, 3);
//     printList(head);
// }

// LL @gfg

#include<bits/stdc++.h>
#define null NULL
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void push(Node** head, int data){
    Node* newHead = new Node();
    newHead->data = data;
    newHead->next = *head;
    *head = newHead;
}
void pushAtEnd(Node* head, int data){
    Node* temp = new Node();
    Node* newNode = new Node();
    temp = head;
    while(temp->next != null) temp = temp->next;
    newNode->data = data;
    newNode->next = null;
    temp->next = newNode;
}
int main(){
    Node* head = new Node();
    head->data = 2;
    head->next = null;
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    // complexity of each insertion operation is O(1)
    pushAtEnd(head, 10);
    pushAtEnd(head, 11);
    pushAtEnd(head, 12);
    pushAtEnd(head, 13);
    // complexity of each such operation (insertion at end) is again O(1)
    // traversal
    Node* temp = new Node();
    temp = head;
    while(temp != null){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}