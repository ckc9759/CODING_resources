### N o T e S

---

* Nodes will be created in heap using malloc function in c or new operator in C++.

![bst](https://user-images.githubusercontent.com/95117634/179927954-5fc75668-03d2-4c6c-b1fb-7d6beedc85ec.png)

### Implementation

```cpp
#include<iostream>
using namespace std;
// BstNode* rootPtr; // To store the address of root node.
struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};
BstNode* GetNewNode(int data){
    BstNode* newNode = new BstNode();
    // anything in dynamic memory or heap is accessed through pointers.
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}
BstNode* Insert(BstNode* root, int data){
    if(root==NULL){ // empty tree
        root=GetNewNode(data);
        return root;
    }
    else if(data<=root->data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;
}
bool Search(BstNode* root, int data){
    if(root==NULL) return false;
    if(root->data==data) return true;
    else if(data<=root->data) return Search(root->left,data);
    else return Search(root->right,data);
}
int main(){
    BstNode* root;
    root = NULL; // setting tree as empty
    Insert(root,15);
    Insert(root,10);
    Insert(root,20);
    Insert(root,35);
    Insert(root,41);
    Insert(root,12);
    int number;
    cin>>number;
    if(Search(root,number)==true) cout<<"found"<<endl;
    else cout<<"Not found"<<endl;
}
```

---


Thank you
