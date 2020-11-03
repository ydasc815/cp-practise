// Operations in Binary Search Tree
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
Node* insertInBST(Node* root, int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = null;
    if(root == null){
        root = newNode;
    } else if(data <= root->data){
        root->left = insertInBST(root->left, data);
    } else{
        root->right = insertInBST(root->right, data);
    }
    return root;
}

int main(){
    FastIO
    
}