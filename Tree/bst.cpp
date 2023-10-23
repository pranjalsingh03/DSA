#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

class BinarySearchTree{
    private:
    Node *root;
    public:
    BinarySearchTree(){
        root = NULL;   
    }
    void Insert(int data){
        root=insertrecursive(root,data);
    }
    Node* insertrecursive(Node* root, int data){
        if(root==nullptr){
            return new Node(data);
        }
        if(data< root->data){
            root->left=insertrecursive(root->left,data);
        }
        else if (data>root->data)
        {
            root->right=insertrecursive(root->right,data);
        }
        return root;
    }
    bool search(int data){
        return searchrecursive(root,data);
    }
    
    bool searchrecursive(Node* root ,int data){
        if (root==nullptr){
            return false;
        }
        if (data==root->data)
        {
            return true;
        }
        if (data<root->data)
        {
            return searchrecursive(root->left,data);
        }
        
        return searchrecursive(root->right,data);
    }
};

int main(){
    BinarySearchTree bst;
    bst.Insert(3);
    bst.Insert(4);
    bst.Insert(5);
    bst.Insert(6);

    if (bst.search(7)){
        std::cout << "data found" << std::endl;
        }
    else{
        std::cout << "not found" << std::endl;
    }
}
