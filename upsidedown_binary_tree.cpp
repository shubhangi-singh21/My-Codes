/* Suppose that we are given a binary tree:
    
    1
   / \
  2   3
 / \
4   5
Binary Tree:
    1
   / \
  2   3
 / \
4   5
In Main Function:               call upsideDownBinaryTree(1)
Binary Tree:
    1
   / \
  2   3
 / \
4   5
In upsideDownBinaryTree(1):     call upsideDownBinaryTree(2)
Binary Tree:
    1
   / \
  2   3
 / \
4   5
In upsideDownBinaryTree(2):     call upsideDownBinaryTree(4)
Binary Tree:
    1
   / \
  2   3
 / \
4   5
In upsideDownBinaryTree(4):     hit base case
                                return 4
Binary Tree:
    1
   / \
  2   3
 / \
4   5
In upsideDownBinaryTree(2):     let 4 left point to 5
                                let 4 right point to 2
                                let 2 left point to NULL
                                let 2 right point to NULL
                                return 4
Binary Tree:
    1
   / \
  2   3
 / 
4 - 5
In upsideDownBinaryTree(1):     let 2 left point to 3
                                let 2 right point to 1
                                let 1 left point to NULL
                                let 1 right point to NULL
                                return 4
Binary Tree:
    1
   / 
  2 - 3
 / 
4 - 5
In Main Function:               get 4 

Time and space complexity: O(N)

-----------------------------------------------------------------------------------*/

TreeNode* upsideDownBinaryTree(TreeNode* root) {
    if (!root || !root->left) {
        return root;
    }
    
    TreeNode* newRoot = upsideDownBinaryTree(root->left);
    root->left->left = root->right;
    root->left->right = root;
    root->left = NULL;
    root->right = NULL;
    
    return newRoot;
}
