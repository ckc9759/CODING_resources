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
