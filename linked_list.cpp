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

// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// void push(Node** head, int data){
//     Node* newHead = new Node();
//     newHead->data = data;
//     newHead->next = *head;
//     *head = newHead;
// }
// void pushAtEnd(Node* head, int data){
//     Node* temp = new Node();
//     Node* newNode = new Node();
//     temp = head;
//     while(temp->next != null) temp = temp->next;
//     newNode->data = data;
//     newNode->next = null;
//     temp->next = newNode;
// }
// int main(){
//     Node* head = new Node();
//     head->data = 2;
//     head->next = null;
//     push(&head, 3);
//     push(&head, 4);
//     push(&head, 5);
//     // complexity of each insertion operation is O(1)
//     pushAtEnd(head, 10);
//     pushAtEnd(head, 11);
//     pushAtEnd(head, 12);
//     pushAtEnd(head, 13);
//     // complexity of each such operation (insertion at end) is again O(n) [n = number of nodes]
//     // traversal
//     Node* temp = new Node();
//     temp = head;
//     while(temp != null){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// // Practise -> Create a singly linkedlist of first 10 natural numbers, then
// // 1. insert number "51" after number "6"
// // 2. print all odd numbers from the linked list.
// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// void pushAtEnd(Node* head, int data){
//     Node* temp = new Node();
//     Node* newNode = new Node();
//     temp = head;
//     while(temp->next != null) temp = temp->next;
//     newNode->data = data;
//     newNode->next = null;
//     temp->next = newNode;
// }
// void pushAfterNode(Node* pNode, int data){
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = pNode->next;
//     pNode->next = newNode;
// }
// int main(){
//     Node* head = new Node();
//     head->data = 1;
//     head->next = null;
//     for(int i=2; i<=10; i++) pushAtEnd(head, i);
//     Node* temp = new Node();
//     temp = head;
//     while(temp != null){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<"\n";
//     // inserting "51" after 6
//     temp = head;
//     while(temp->data != 6 && temp != null) temp = temp->next;
//     if(temp->data != 6) cout<<"Element does not exist"<<"\n";
//     else{
//         pushAfterNode(temp, 51);
//     }
//     temp = head;
//     while(temp != null){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<"\n";
//     // printing all odd numbers from the linked list
//     temp = head;
//     while(temp != null){
//         if(temp->data % 2 != 0) cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// // Practise -> Delete nodes from the linkedlist
// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// void pushAtEnd(Node* head, int data){
//     Node* temp = new Node();
//     Node* newNode = new Node();
//     temp = head;
//     while(temp->next != null) temp = temp->next;
//     newNode->data = data;
//     newNode->next = null;
//     temp->next = newNode;
// }
// void deleteFromStart(Node** head){
//     if(head == null) cout<<"List is empty, can't delete !";
//     else{
//         Node* temp = new Node();
//         temp = *head;
//         temp = temp->next;
//         *head = temp;
//     }
// }
// void deleteFromEnd(Node* head){
//     if(head == null) cout<<"List is empty, can't delete !";
//     else{
//         Node* temp = new Node();
//         temp = head;
//         while(temp->next->next != null) temp = temp->next;
//         temp->next = null;
//     }
// }
// int main(){
//     Node* head = new Node();
//     head->data = 1;
//     head->next = null;
//     for(int i=2; i<=10; i++) pushAtEnd(head, i);
//     // delete node from start
//     deleteFromStart(&head);
//     deleteFromStart(&head);
//     // traversal
//     Node* temp = new Node();
//     temp = head;
//     while(temp != null){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<"\n";
//     deleteFromEnd(head);
//     deleteFromEnd(head);
//     deleteFromEnd(head);
//     temp = head;
//     while(temp != null){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// // Practise -> Delete node at given position
// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// void pushAtEnd(Node* head, int data){
//     Node* temp = new Node();
//     Node* newNode = new Node();
//     temp = head;
//     while(temp->next != null) temp = temp->next;
//     newNode->data = data;
//     newNode->next = null;
//     temp->next = newNode;
// }
// void deleteAtN(Node** head, int pos){
//     if(*head == null) cout<<"List is empty"<<"\n";
//     else{
//         Node* temp = new Node();
//         Node* temp1 = new Node();
//         temp1 = *head;
//         temp1 = temp1->next;
//         temp = *head;
//         pos--;
//         while(pos-- && temp != null){
//             temp = temp->next;
//             temp1 = temp1->next;
//         }
//         //if(pos > -1) cout<<"No element exist at pos " + pos<<"\n";
//         temp->next = temp1->next;
//     }
// }
// int main(){
//     Node* head = new Node();
//     head->data = 1;
//     head->next = null;
//     for(int i=2; i<=10; i++) pushAtEnd(head, i);
//     deleteAtN(&head, 3);
//     deleteAtN(&head, 1);
//     // traversal
//     Node* temp = new Node();
//     temp = head;
//     while(temp != null){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// // Revision -> Create a singly linkedlist of 5 elements by taking input from user and print it.
// // Follow array insertion pattern for inserting elements into the linkedlist.
// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// void pushAtEnd(Node* head, int data){
//     Node* newNode = new Node();
//     Node* temp = new Node();
//     newNode->data = data;
//     newNode->next = null;
//     temp = head;
//     while(temp->next != null) temp = temp->next;
//     temp->next = newNode;
// }
// int main(){
//     int x; 
//     Node* head = new Node();
//     head->data = 1;
//     head->next = null;
//     for(int i=0; i<4; i++){
//         cin>>x;
//         pushAtEnd(head, x);
//     }
//     // traversal
//     Node* temp = new Node();
//     temp = head;
//     while(temp != null){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

#include<bits/stdc++.h>
#define null NULL
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void pushAtEnd(Node** head, int data){
    Node* newNode = new Node();
    Node* temp = new Node();
    newNode->data = data;
    newNode->next = null;
    if(*head == null){
        *head = newNode;
        return;
    }
    temp = *head;
    while(temp->next != null) temp = temp->next;
    temp->next = newNode;
}
int main(){
    int x; 
    Node* head = null;
    for(int i=0; i<5; i++){
        cin>>x;
        pushAtEnd(&head, x);
    }
    // traversal
    Node* temp = new Node();
    temp = head;
    while(temp != null){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}