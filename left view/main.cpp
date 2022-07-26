#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void right_view(Node* root){
    if(root==NULL){
        return;
    }

    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i=0;i<n;i++){
           Node* curr = q.front();
        q.pop();
        if(i==(0)){
            cout<<curr->data<<" ";
        }

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }


    }
}

int main()
{
    Node* root= new Node(8);
    root->left = new Node(9);
    root->right = new Node(10);
    root->left->left = new Node(11);
    root->left->right = new Node(12);
    root->right->left = new Node(13);
    root->right->right = new Node(14);

    right_view(root);

    return 0;
}
