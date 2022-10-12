### Binary Tree

---

Non linear data type stored in an hierarchical manner.

Root nodes , leafs, children and parents --> Terms assosciated with trees.

- First node is called the root node. (First level)
- Last level nodes are called leafs.


---

Binary tree is a tree which has two nodes at each level.

```cpp
Properties

* Maximum nodes at level L = 2^L
* Maximum nodes in a tree of Height H = 2^H-1.

(Height is the total number of levels.)

* For N nodes, min H or min L = Log2(N+1).
* A binary tree with L leaves has atleast Log2(N+1)+1 leaves.
```

Code for binary tree : 

```cpp
struct Node{
   int data;
   struct Node* left;
   struct Node* right;
   Node(int val){
     data = val;
     left=NULL;
     right=NULL:
   }
};

int main(){
   struct Node* root = new Node(1);
   root->left=new Node(2);
   root->right=new Node(3):
   
   /*  
             1
           /   \
          2     3
   */
   
   root->left->left=new Node(4);
   root->left->right=new Node(5);
   return 0;
}

---

## Tree Traversal

#### Preorder Traversal

```cpp
// Basically start with root traverse the left subtree and then the right subtree. Example -> 1,2,3,4,5,6,7

void preorder(struct Node* root){
   if(root==NULL) return;
   cout<<root->data<<" ";
   preorder(root-left);
   preorder(root->right);
}
```

#### Inorder Traversal 

```cpp
// Basically start with left subtree go to root and then right subtree is traversed. Example -> 3,2,4,1,6,5,7 for a binary tree with 7 natural numbers of height 3.

void inorder(struct Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
```

#### Postorder Traversal

```cpp
// Basically start with left then right subtree then go to the root. Example -> 3,4,2,1,6,7,5

void postorder(struct Node* root){
   if(root==NULL) return;
   postorder(root->left);
   postorder(root->right);
   cout<<root->data<<" ";
}
```

---
