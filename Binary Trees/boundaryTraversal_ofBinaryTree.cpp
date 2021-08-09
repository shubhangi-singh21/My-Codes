/*Given a binary tree, return the values of its boundary in anti-clockwise direction starting from root. Boundary includes left boundary, leaves, and right boundary in order without duplicate nodes.

Left boundary is defined as the path from root to the left-most node. Right boundary is defined as the path from root to the right-most node. If the root doesn't have left subtree or right subtree, then the root itself is left boundary or right boundary. Note this definition only applies to the input binary tree, and not applies to any subtrees.

The left-most node is defined as a leaf node you could reach when you always firstly travel to the left subtree if exists. If not, travel to the right subtree. Repeat until you reach a leaf node.

The right-most node is also defined by the same way with left and right exchanged.
Input:
  1
   \
    2
   / \
  3   4

Ouput:
[1, 3, 4, 2]

Explanation:
The root doesn't have left subtree, so the root itself is left boundary.
The leaves are node 3 and 4.
The right boundary are node 1,2,4. Note the anti-clockwise direction means you should output reversed right boundary.
So order them in anti-clockwise without duplicates and we have [1,3,4,2].*/

struct Node
{
  int data;
  Node* left, *right;
};

void LeftTree(Node* root, vector <int> &ans){
  if(!root) return;
  if(root->left){
    ans.push_back(root->data);
    LeftTree(root->left, ans);
  }
  
  else if(root->right){
    ans.push_back(root->data);
    LeftTree(root->right, ans);
  }
}

void Leaf(Node* root, vector <int> &ans){
  if(!root) return;
  Leaf(root->left, ans);
  if(!root->left && !root->right) ans.push_back(root->data, ans);
  Leaf(root->right, ans);
}

void RightTree(Node* root, vector <int> &ans){
  if(!root) return;
  if(root->right){
    RightTree(root->right, ans);
    ans.push_back(root->data);
  }
  
  else if(root->left){
    RightTree(root->left, ans);
    ans.push_back(root->data);
  }
}

vector<int> printBoundary(Node *root){
  vector<int> ans;
  ans.push_back(root->data);
  LeftTree(root->left, ans);
  Leaf(root, ans);
  RightTree(root->right, ans);
  return ans;
}
