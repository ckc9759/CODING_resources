### N o T e S 

---

### Binary Tree :

Atmost 2 children.

* Perfect Binary Tree : Each node has exactly 2 children except the last ones. Maxm nodes : ( 2^(h+1) -1 ) 
* Strict or Proper Binary Tree : Each node has either 2 or 0 children.
* Height of a perfect binary tree with n nodes : log2(n+1)-1.
* Height of complete binary tree with n nodes : log2(n).

---

### Implementing Binary Tree 

* Dynamically created nodes.
* Arrays.

### Binary Tree Traversal

* Tree traversal - Breadth first or Depth first.

```py
* Breadth first - Level order.
* Depth first - Preorder, Postorder, Inorder.

* Preorder - root -> left -> right.
* Inorder - left -> root -> right.
* Postorder - left -> right -> root.
```

---

### Level Order traversal 

We traverse like zig zag l1 -> l2 -> l3 -> l4 like this

Code : 

```cpp
/* Binary Tree - Level Order Traversal */
#include<iostream>
#include<queue>
using namespace std;
struct Node{
    char data;
    Node *left;
    Node *right;
};
void LevelOrder(Node *root){
    if(root == NULL) return;
    queue<Node*>Q;
    Q.push(root);
    // while there is atleast one discovered Node
    while(!Q.empty()){
        Node* current = Q.front();
        cout<<current->data<<" ";
        if(current->left!=NULL){
            Q.push(current->left);
        }
        if(current->right!=NULL){
            Q.push(current->right);
        }
        Q.pop();// removing the element at the front
    }
}

// Time Complexity -> O(n);
// Space Complexity -> O(n);
```

---

### Depth first traversal

```cpp
#include<iostream>
struct Node{
    char data;
    Node *left;
    Node *right;
};
void Preorder(struct Node *root){ // pointer to node
    if(root == NULL) return;
    cout<<root->data;
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(struct Node *root){
    if(root==NULL) return;
    Inorder(root->left);
    cout<<root->data;
    Inorder(root->right);
}
void Postorder(struct Node *root){
    if(root == NULL) return;
    Preorder(root->left);
    Preorder(root->right);
    cout<<root->data;
}
```

---

Thank you
