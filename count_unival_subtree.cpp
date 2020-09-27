//runs in O(n) time complexity


#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *left, *right;
};

//function to create a new node
Node *newNode(int data)
{
  Node* temp= new Node;
  temp->data=data;
  temp->left=temp->right=NULL;
  return(temp);
 }
 
 //function to count no of univalued subtree, returns true if subtree under root is unival, else returns false.
 bool countUnivalSubtree( New *root, int &count)
 {
  //case 1: return true to indicate NULL root
  if(root==NULL) //NULL root is considered unival
  return true;
  
  //recursively checks in left and right subtree
  bool left= countUnivalSubtree( New *root->left, count);
  bool right= countUnivalSubtree( New *root->right, count);
  
  //case 2: if any subtree is not unival, then this whole subtree can't be unival too
  if(left==false || right==false)
  return false;
  
  //case 3: case where left subtree is unival and non-empty. but data doesn't match
  if(root->left && root->data !=root->left->data)
  return false;
  
  //case where right subtree is unival and non-empty. but data doesn't match
  if(root->right && root->data !=root->right->data)
  return false;
  
  //if none of the above case if true, then tree rooted under root is unival, hence increment count and return true
  count++;
  return true;
  
 }
 
 //function to call countUnivalSubtree() and initializes count=0, this function will be called in main()
 int countUnival(Node *root)
 {
  int count=0;
  
  //recursive function to count
  countUnivalSubtree(root, count);
  return count;
 }
 
 
  
