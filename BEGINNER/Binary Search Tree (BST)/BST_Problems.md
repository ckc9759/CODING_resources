### N o T e S

---

### Finding height of a tree

```cpp
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *right;
    struct Node *left;
};

int FindHeight(struct Node *root){
    if(root==NULL){
        return -1;
    }
    return max(FindHeight(root->left),FindHeight(root->right))+1;
}
```

---

### Finding minm and max element in it.

```cpp
#include<iostream>
using namespace std;

struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};

int FindMin(BstNode* root){
    if(root==NULL) return -1;
    BstNode* current=root;
    while(current->left!=NULL){
       current=current->left;
    }
    return current->data;
}

int FindMax(BstNode* root){
    if(root==NULL) return -1;
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}
```

---

### Deleting a node 

```cpp
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

struct Node* Delete(struct Node *root, int data){
    if(root==NULL) return root; 
    else if(data<root->data) root-left=Delete(root->left,data);
    else if(data>root->data) root-right=Delete(root-right,data);
    else{
        if(root->left==NULL&&root->right==NULL){
            delete root; // deallocate memory in heap
            root = NULL;
            return root;
        }
        else if(root->left==NULL){
            struct Node *temp=root;
            root=root->right;
            delete temp;
            return root;
        }
        else if(root->right==NULL){
            struct Node *temp=root;
            root=root->left;
            delete temp;
            return root;
        }
        else{
            struct Node* temp=FindMin(root->right);
            root->data=temp->data;
            root->right=Delete(root->right,temp->data);
        }
    }
}
```

---
