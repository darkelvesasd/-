 void preorder(struct TreeNode* root, int* returnSize,int *a)
 {
	 if (root == NULL)
	 {
		 return;
	 }
	 else
	 {
		 a[(*returnSize)++] = root->val;
		 preorder(root->left, returnSize, a);
		 preorder(root->right, returnSize, a);
	 }
 }
 int* preorderTraversal(struct TreeNode* root, int* returnSize) {
	 int* a = (int*)malloc(sizeof(int) * 100);
	 *returnSize = 0;
	 preorder( root, returnSize,a);
	 return a;
	 }
