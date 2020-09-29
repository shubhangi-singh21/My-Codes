//Given a non-empty binary search tree and a target value, find the value in the BST that is closest to the target.


struct Tree
{
	int data;
	struct Tree* left, *right;
};

struct Tree* createNode(int root)
{
	struct Tree* temp= (struct Tree)malloc(struct Tree*);
	temp->data= root;
	temp->left=temp->right=NULL:
return(temp);
}

int closestValue(struct Tree *temp, int target, int min_diff, int min_diff_key)
{
	if(temp==NULL) //tree is empty
	return;
	
	//to check if target is itself present or not at current node
	if(temp->data==target)
	min_diff_key=target;
	return;
	
	//to search for potential closest value
	if(min_diff > abs(temp->data-target)
	{
		min_diff= abs(temp->data-target);
		min_diff_key=ptr->data;
	}
	
	//if target<temp->data move to left subTree, else move to rightSubtree
	if(target < temp->data)
	{
		closestValue( temp->left, target, min_diff, min_diff_key);
	}
	else
	closestValue( temp->right, target, min_diff, min_diff_key);

}

int minDiff( Tree *root, int target)//wrapper function to keep things neat
{
	int min_diff= INT_MAX; //min diff till now
	int min_diff_key= -1; //the node which contains min diff
	closestValue(root, target, min_diff, min_diff_key);
	return min_diff_key;
}

Time complexity: O(h), h:height of tree
