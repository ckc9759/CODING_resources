### Binary Tree 

---

#### Level order Traversal

```cpp

struct Node{
   int data;
   struct Node* right;
   struct Node* left;
   Node(int val){
      data=val;
      left=NULL;
      right=NULL;
   }
};

void printlevelorder(Node* root){
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* node=q.front();
        q.pop();
        if(node!=NULL){
           cout<<node->data<<" ";
           if(node->left) q.push(node->left);
           if(node->right) q.push(node->right);
           
        }
        else if(!q.empty){
           q.push(NULL);
        }
    }
}

```


#### Find the sum of node at kth level in a Binary Tree.

```cpp
int sumAtK(Node* root,int K){
   if(root==NULL) return -1;
   queue<Node*>q;
   q.push(root);
   q.push(NULL);
   int level=0;
   int sum=0;
   while(!q.empty()){
      Node* node=q.front();
      q.pop();
      if(node!=NULL){
          if(level==k){
             sum+=node->data;
          }
          if(node->left) q.push(node->left);
          if(node->right) q.push(node->right);
      }
      else if(!q.empty()){
          q.push(NULL);
          level++;
      }
   }
   return sum;
}
```

---

#### Count of nodes 

```cpp
int countNodes(Node* root){
   if(root==NULL) return 0;
   return countNodes(root->left)+countNodes(root->right)+1;
}
```

#### Sum of all the nodes in a Binary Tree

```cpp
int NodeSum(Node* root){
    if(root==NULL) return 0;
    return NodeSum(root->left)+NodeSum(root->right)+root->data;
}
```

#### Height of a Binary Tree

```cpp
int Height(Node* root){
    if(root==NULL) return 0;
    int lheight=Height(root->left);
    int Rheight=Height(root->right);
    return max(lheight,Rheight)+1;
}
```

#### Diameter of a Binary Tree --> Number of nodes in the longest path between any two leaves.

```cpp
int dia(Node* root){
    if(root==NULL) return 0;
    int lh1=Height(root->left);
    int rh1=Height(root->right);
    int mm1=lh1+rh1+1;
    int lh=dia(root->left);
    int rh=dia(root->right);
    int curd=max(lh,rh);
    return max(mm1,curd);
}
```

