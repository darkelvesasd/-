/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
	 if (root == NULL)
	 {
		 return 0;
	 }
     int left=maxDepth(root->left);
     int right=maxDepth(root->right);
	 return left>right?left+1:right+1;
 }
 bool isBalanced(struct TreeNode* root) {
	 if (root == NULL)
	 {
		 return true;
	 }
	 int left = maxDepth(root->left);
	 int right = maxDepth(root->right);
	 return abs(left-right)<2&&isBalanced(root->left)&&isBalanced(root->right);
 }
