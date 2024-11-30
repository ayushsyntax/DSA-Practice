//simple representation for Binary Tree in C++

#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node* left;
    Node* right;


    Node(int val)
    {
        data = val;
        left = NULL;
        right=NULL;
    }
};


int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
}

