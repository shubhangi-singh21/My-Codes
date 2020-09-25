//Postorder-> left, right, root


#include<bits/stdc++.h>
using namespace std;

void Postorder( struct node *root)
{
  if(root==0)
  { return 0;}
 Postorder( root->left);
 Postorder( root->right);
 printf("%d", root->data);
}

void main()
{
  struct node *root;
  printf( "Postorder is:");
  Postorder(root);
}
