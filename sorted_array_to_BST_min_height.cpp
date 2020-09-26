*In order to make the tree as balance as possible, we hope the left subtree and right subtree have as much
as number of nodes, this would turn the problem to find the middle of the array. Use the middle as a root, 
and use left array to create another tree and right ones the right subtree using the same process. Then the
tree would have balanced height, as well as the minimum height.*/


TreeNode* createMinimalBST(vector<int>& nums) 
    {
        return createMinimalBST(nums, 0, nums.size()-1);        
    }
    TreeNode* buildBST(vector<int> &nums, int start,int end)
    {
        if(start > end)
            return NULL;
        int mid = (start + end)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left  = createMinimalBST(nums, start, mid-1);
        root->right = createMinimalBST(nums, mid+1, end);        
        return root;
    }
