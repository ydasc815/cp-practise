// // Operations in Binary Search Tree
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
// };
// void insertInBST(Node** root, int data){
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->left = newNode->right = null;
//     if(*root == null){
//         *root = newNode;
//     } else if(data <= (*root)->data){
//         insertInBST(&(*root)->left, data);
//     } else{
//         insertInBST(&(*root)->right, data);
//     }
// }

// int main(){
//     FastIO
//     Node* root = null;
//     insertInBST(&root, 1);
//     insertInBST(&root, 3);
//     insertInBST(&root, 2);
//     insertInBST(&root, 5);
//     insertInBST(&root, 4);
//     cout<<root->right->right->data;
// }

// Operations in Binary Search Tree
// given an array, make a bst from it
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
// };
// void insertInBST(Node** root, int data){
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->left = newNode->right = null;
//     if(*root == null){
//         *root = newNode;
//     } else if(data <= (*root)->data){
//         insertInBST(&(*root)->left, data);
//     } else{
//         insertInBST(&(*root)->right, data);
//     }
// }

// int main(){
//     FastIO
//     int a[10];
//     Node* root = null;
//     for(int i=0; i<10; i++){
//         cin>>a[i];
//         insertInBST(&root, a[i]);
//     }
// }

// Operations in Binary Search Tree
// given a bst, search if an input-ted number exists in it
#include<bits/stdc++.h>
#define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
#define null NULL
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
};
void insertInBST(Node** root, int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = null;
    if(*root == null){
        *root = newNode;
    } else if(data <= (*root)->data){
        insertInBST(&(*root)->left, data);
    } else{
        insertInBST(&(*root)->right, data);
    }
}
bool searchInBST(Node* root, int key){
    if(root->data == key) return true;
    else if(root == null) return false;
    else if(key <= root->data) return searchInBST(root->left, key);
    else return searchInBST(root->right, key);
}
int main(){
    FastIO
    Node* root = null;
    insertInBST(&root, 1);
    insertInBST(&root, 3);
    insertInBST(&root, 2);
    insertInBST(&root, 5);
    insertInBST(&root, -1);
    insertInBST(&root, 6);
    insertInBST(&root, 11);
    insertInBST(&root, 10);
    insertInBST(&root, 7);
    cout<<searchInBST(root, -2);
}