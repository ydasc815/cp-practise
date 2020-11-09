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
// level order traversal -> breadth first search - implement using Queue
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #define null NULL
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left = null;
//     Node* right = null;
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
// void levelOrderBst(Node* root){
//     if(root == null) return;
//     queue<Node*> Q;
//     Q.push(root);
//     while(!Q.empty()){
//         Node* curr = Q.front();
//         cout<<curr->data<<" ";
//         if(curr->left != null) Q.push(curr->left);
//         if(curr->right != null) Q.push(curr->right);
//         Q.pop();
//     }
// }
// int main(){
//     FastIO
//     Node* root = null;
//     insertInBST(&root, 1);
//     insertInBST(&root, 3);
//     insertInBST(&root, 2);
//     insertInBST(&root, 5);
//     insertInBST(&root, -1);
//     insertInBST(&root, 6);
//     insertInBST(&root, 11);
//     insertInBST(&root, 10);
//     insertInBST(&root, 7);
//     // level order traversal of bst
//     // perform level order traversal of bst formed from arr = [1, 3, 2, 5, -1, 6, 11, 10, 7]
//     levelOrderBst(root);
// }

// Depth first traversals : Preorder, Inorder, Postorder
#include<bits/stdc++.h>
#define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
#define null NULL
using namespace std;
class Node{
    public:
    int data;
    Node* left = null;
    Node* right = null;
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
void preOrderBst(Node* root){
    if(root == null) return;
    cout<<root->data<<" ";
    preOrderBst(root->left);
    preOrderBst(root->right);
}
void inOrderBst(Node* root){
    if(root == null) return;
    inOrderBst(root->left);
    cout<<root->data<<" ";
    inOrderBst(root->right);
}
void postOrderBst(Node* root){
    if(root == null) return;
    postOrderBst(root->left);
    postOrderBst(root->right);
    cout<<root->data<<" ";
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
    // perform pre-order, in-order & post-order traversal of BST formed from arr = [1, 3, 2, 5, -1, 6, 11, 10, 7]
    preOrderBst(root);
    cout<<"\n";
    inOrderBst(root);
    cout<<"\n";
    postOrderBst(root);
}