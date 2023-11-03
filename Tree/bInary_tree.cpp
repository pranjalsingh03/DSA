#include <iostream>
using namespace std;

struct Node
{
    Node *left;
    int data;
    Node *right;
};

Node *root = NULL;

void create_BST(int item)
{
    Node *newnode = new Node;
    newnode->data = item;
    newnode->left = NULL;
    newnode->right = NULL;
    if (root == NULL)
    {
        root = newnode;
        return;
    }
    else
    {
        Node *ptr = root;
        Node *parent = NULL;
        while (ptr != NULL)
        {
            parent = ptr;
            if (item < ptr->data)
            {
                ptr = ptr->left;
            }
            else
            {
                ptr = ptr->right;
            }
        }
        if (item < parent->data)
        {
            parent->left = newnode;
        }
        else
        {
            parent->right = newnode;
        }
    }
}

void inorder(Node *rt)
{
    if (rt != NULL)
    {
        inorder(rt->left);
        cout << rt->data << " ";
        inorder(rt->right);
    }
}

void preorder(Node *rt)
{
    if (rt != NULL)
    {
        cout << rt->data << " ";
        preorder(rt->left);
        preorder(rt->right);
    }
}

void postorder(Node *rt)
{
    if (rt != NULL)
    {
        postorder(rt->left);
        postorder(rt->right);
        cout << rt->data << " ";
    }
}

Node *search(int item)
{
    Node *rt = root;
    if (rt == NULL)
    {
        return NULL;
    }
    while (rt)
    {
        if (item == rt->data)
        {
            return rt;
        }
        else if (item > rt->data)
        {
            rt = rt->right;
        }
        else
        {
            rt = rt->left;
        }
    }
    return NULL;
}

int main()
{
    int ch, item, ele;
    do
    {
        cout << "\n\nEnter choice: 1.Insert 2.Inorder 3.Preorder 4.Postorder 5.Search 6.Exit: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nEnter item: ";
            cin >> item;
            create_BST(item);
            break;
        case 2:
            cout << "\nInorder traversal is: ";
            inorder(root);
            break;
        case 3:
            cout << "\nPreorder traversal is: ";
            preorder(root);
            break;
        case 4:
            cout << "\nPostorder traversal is: ";
            postorder(root);
            break;
        case 5:
        {
            cout << "\nEnter element you want to search: ";
            cin >> ele;
            Node *sn = search(ele);
            if (sn == NULL)
            {
                cout << "\nNode " << ele << " not found";
            }
            else
            {
                cout << "\nNode " << sn->data << " found.";
            }
            break;
        }
        case 6:
            exit(0);
            break;
        default:
            cout << "\nInvalid choice entered";
            break;
        }
    } while (ch != 6);
    return 0;
}
