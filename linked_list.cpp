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

// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// void pushAtEnd(Node** head, int data){
//     Node* newNode = new Node();
//     Node* temp = new Node();
//     newNode->data = data;
//     newNode->next = null;
//     if(*head == null){
//         *head = newNode;
//         return;
//     }
//     temp = *head;
//     while(temp->next != null) temp = temp->next;
//     temp->next = newNode;
// }
// int main(){
//     int x; 
//     Node* head = null;
//     for(int i=0; i<5; i++){
//         cin>>x;
//         pushAtEnd(&head, x);
//     }
//     // traversal
//     Node* temp = new Node();
//     temp = head;
//     while(temp != null){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// // Revise Concept [0.1k%] : Create a singly linked list and add some elements to the end of it (append)
// // Then delete a given key of the list, if reference to the head node of the linked list is given.
// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// void pushAtEnd(Node** head, int data){
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = null;
//     if(*head == null){
//         *head = newNode;
//         return;
//     }
//     Node* temp = new Node();
//     temp = *head;
//     while(temp->next != null) temp = temp->next;
//     temp->next = newNode;
// }
// void deleteKey(Node** head, int key){
//     if(*head == null){
//         cout<<"List is empty"<<"\n";
//         return;
//     }
//     Node* temp = new Node();
//     Node* prev = new Node();
//     temp = *head;
//     if(temp->data == key){
//         *head = temp->next;
//         free(temp);
//         return;
//     }
//     while(temp != null && temp->data != key){
//         prev = temp;
//         temp = temp->next;
//     }
//     if(temp == null){
//         cout<<"Given key does not exist in this list"<<"\n";
//         return;
//     }
//     prev->next = temp->next;
//     free(temp);
// }
// int main(){
//     Node* head = null;
//     pushAtEnd(&head, 1);
//     pushAtEnd(&head, -3);
//     pushAtEnd(&head, -8);
//     pushAtEnd(&head, 6);
//     pushAtEnd(&head, 5);
//     pushAtEnd(&head, 4);
//     Node* temp = new Node();
//     temp = head;
//     while(temp != null){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<"\n";
//     deleteKey(&head, 1);
//     deleteKey(&head, 6);
//     deleteKey(&head, 59);
//     temp = head;
//     while(temp != null){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// // Revise (with prev doubts resolved) : Delete a node at given position in a singly linked list
// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// void pushAtEnd(Node** head, int data){
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = null;
//     if(*head == null){
//         *head = newNode;
//         return;
//     }
//     Node* temp = new Node();
//     temp = *head;
//     while(temp->next != null) temp = temp->next;
//     temp->next = newNode;
// }
// void deleteAtN(Node** head, int pos){
//     Node* temp = new Node();
//     Node* prev = new Node();
//     temp = *head;
//     if(pos == 0){
//         *head = temp->next;
//         free(temp);
//         return;
//     }
//     while(pos-- && temp != null){
//         prev = temp;
//         temp = temp->next;
//     }
//     if(pos > 0){
//         cout<<"No such position in the list"<<"\n";
//         return;
//     }
//     prev->next = temp->next;
//     free(temp);
// }
// int main(){
//     Node* head = null;
//     pushAtEnd(&head, 2);
//     pushAtEnd(&head, -3);
//     pushAtEnd(&head, 4);
//     pushAtEnd(&head, 5);
//     pushAtEnd(&head, 9);
//     pushAtEnd(&head, 13);
//     pushAtEnd(&head, -5);
//     Node* temp = new Node();
//     temp = head;
//     while(temp != null){
//         cout<<temp->data<<" "; 
//         temp = temp->next;
//     }
//     cout<<"\n";
//     deleteAtN(&head, 0);
//     deleteAtN(&head, 3);
//     deleteAtN(&head, 2);
//     deleteAtN(&head, 13);
//     temp = head;
//     while(temp != null){
//         cout<<temp->data<<" "; 
//         temp = temp->next;
//     }
// } 

// // Practise -> Given a linked list, write a program to delete this linked list
// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// void pushAtEnd(Node** head, int data){
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = null;
//     if(*head == null){
//         *head = newNode;
//         return;
//     }
//     Node* temp;
//     temp = *head;
//     while(temp->next != null) temp = temp->next;
//     temp->next = newNode;
// }
// // [OBSERVATION] : No need to assign a memory block to temp (= new Node()) because temp does not have to store any data.
// void deleteList(Node** head){
//     Node* temp; Node* temp1;
//     temp = *head;
//     while(temp != null){
//         temp1 = temp->next;
//         free(temp);
//         temp = temp1;
//     }
//     *head = null;
// }
// int main(){
//     Node* head = null;
//     pushAtEnd(&head, 1);
//     pushAtEnd(&head, -2);
//     pushAtEnd(&head, 3);
//     pushAtEnd(&head, 4);
//     pushAtEnd(&head, 6);
//     Node* temp;
//     // traversal -> to check if all the above elements have been added to the linked list
//     temp = head;
//     while(temp != null){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<"\n";
//     deleteList(&head);
//     // traversal -> to check if the lineked list has been deleted (all elements removed)
//     temp = head;
//     while(temp != null){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// // Practise : Find the size of a singly linked list
// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// void pushAtEnd(Node** head, int data){
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = null;
//     if(*head == null){
//         *head = newNode;
//         return;
//     }
//     Node* temp;
//     temp = *head;
//     while(temp->next != null) temp = temp->next;
//     temp->next = newNode;
// }
// void sizeOfList(Node* head){
//     Node* temp = head;
//     int count = 0;
//     while(temp != null){
//         count++;
//         temp = temp->next;
//     }
//     cout<<count<<" ";
// }
// int main(){
//     Node* head = null;
//     pushAtEnd(&head, 2);
//     pushAtEnd(&head, 1);
//     pushAtEnd(&head, -1);
//     pushAtEnd(&head, 3);
//     pushAtEnd(&head, 4);
//     pushAtEnd(&head, 9);
//     pushAtEnd(&head, 6);
//     sizeOfList(head);
// }

// // Practise : Find if a given key x exists in a singly linked list
// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// void pushAtEnd(Node** head, int data){
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = null;
//     if(*head == null){
//         *head = newNode;
//         return;
//     }
//     Node* temp;
//     temp = *head;
//     while(temp->next != null) temp = temp->next;
//     temp->next = newNode;
// }
// bool findX(Node* head, int x){
//     Node* temp = head;
//     while(temp != null && temp->data != x) temp = temp->next;
//     if(temp == null) return 0;
//     else return 1;
// }
// signed main(){
//     Node* head = null;
//     pushAtEnd(&head, 2);
//     pushAtEnd(&head, 8);
//     pushAtEnd(&head, 9);
//     pushAtEnd(&head, 3);
//     pushAtEnd(&head, 4);
//     cout<<findX(head, 8)<<" "<<findX(head, 10);
// }

// // Practise :  Find nth node in a singly linked list
// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// void pushAtEnd(Node** head, int data){
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = null;
//     if(*head == null){
//         *head = newNode;
//         return;
//     }
//     Node* temp;
//     temp = *head;
//     while(temp->next != null) temp = temp->next;
//     temp->next = newNode;
// }
// void getNthKey(Node* head, int pos){
//     int t = 0;
//     Node* temp = head;
//     while(temp != null && t != pos){
//         t++;
//         temp = temp->next;
//     }
//     if(temp == null){
//         cout<<"No such position in the list"<<"\n";
//         return;
//     }
//     cout<<temp->data<<" ";
// }
// int main(){
//     Node* head = null;
//     pushAtEnd(&head, 3);
//     pushAtEnd(&head, 11);
//     pushAtEnd(&head, 21);
//     pushAtEnd(&head, 29);
//     pushAtEnd(&head, 43);
//     getNthKey(head, 0);
//     getNthKey(head, 3);
//     getNthKey(head, 10);
// }

// // Practise : Given a singly linked list, print its middle node/element
// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// void pushAtEnd(Node** head, int data){
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = null;
//     if(*head == null){
//         *head = newNode;
//         return;
//     }
//     Node* temp;
//     temp = *head;
//     while(temp->next != null) temp = temp->next;
//     temp->next = newNode;
// }
// void middleKey(Node* head){
//     int size = 0;
//     Node* temp = head;
//     while(temp != null){
//         size++;
//         temp = temp->next;
//     }
//     temp = head;
//     int t = 0;
//     if(size%2 != 0){
//         while(t != size/2){
//             temp = temp->next;
//             t++;
//         }
//         cout<<temp->data<<" ";
//     } else{
//         while(t != (size/2)-1){
//             temp = temp->next;
//             t++;
//         }
//         cout<<temp->data<<" "<<temp->next->data<<" ";
//     }
// }
// int main(){
//     Node* head = null;
//     pushAtEnd(&head, 4);
//     pushAtEnd(&head, 3);
//     pushAtEnd(&head, 1);
//     pushAtEnd(&head, 9);
//     pushAtEnd(&head, 2);
//     pushAtEnd(&head, -1);
//     pushAtEnd(&head, -5);
//     pushAtEnd(&head, -9);
//     middleKey(head);
// } runs fine. Another method is to use a fast and a slow pointer such that fast moves 2 times farther from slow pointer
// in short, *fast = *fast->next->next & *slow = *slow->next;

// // Practise : Count number of occurences of a given key in a singly linked list
// #include<bits/stdc++.h>
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// void pushAtEnd(Node** head, int data){
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = null;
//     if(*head == null){
//         *head = newNode;
//         return;
//     }
//     Node* temp = *head;
//     while(temp->next != null) temp = temp->next;
//     temp->next = newNode;
// }
// void printList(Node* head){
//     Node* temp = head;
//     while(temp != null){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<"\n";
// }
// void countOcc(Node* head, int key){
//     Node* temp = head;
//     int count = 0;
//     while(temp != null){
//         if(temp->data == key) count++;
//         temp = temp->next;
//     }
//     cout<<count<<"\n";
// }
// int main(){
//     Node* head = null;
//     pushAtEnd(&head, 2);
//     pushAtEnd(&head, 1);
//     pushAtEnd(&head, 3);
//     pushAtEnd(&head, -4);
//     pushAtEnd(&head, 5);
//     pushAtEnd(&head, 3);
//     pushAtEnd(&head, -6);
//     printList(head);
//     // counting no. of occurences of a key :
//     countOcc(head, 3);
// }

// Practise : Detect a loop in a singly linked list
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
    newNode->data = data;
    newNode->next = null;
    if(*head == null){
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while(temp->next != null) temp = temp->next;
    temp->next = newNode;
}
void printList(Node* head){
    Node* temp = head;
    while(temp != null){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}
int main(){
    Node* head = null;
    pushAtEnd(&head, 1);
    pushAtEnd(&head, 2);
    pushAtEnd(&head, 3);
    pushAtEnd(&head, 4);
    pushAtEnd(&head, 5);
    pushAtEnd(&head, 6);
    Node* temp = head; Node* temp1 = head;
    temp = temp->next->next;
    while(temp1->next != null) temp1 = temp1->next;
    temp1->next = temp; // loop made here
    map<Node*, int> m; int fg = 0;
    temp = head;
    for(int i=0; i<6; i++){
        m[temp->next]++;
        temp = temp->next;
    }
    for(auto i=m.begin(); i!=m.end(); i++){
        if(i->second > 1){
            fg = 1;
            break;
        }
    }
    if(fg == 1) cout<<"Loop found"<<"\n";
    else cout<<"Loop not found"<<"\n";
}