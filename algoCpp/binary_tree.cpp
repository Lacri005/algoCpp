/*二叉树*/
#include "binary_tree.h"


/*二叉树的遍历-层序遍历-广度优先遍历*/
std::vector<int> LevelOrder(TreeNode * root)
{
	/*初始化队列，并将根节点放入队列中*/
	std::queue<TreeNode*> queue;
	queue.push(root);
	/*使用动态数组存放二叉树数据*/
	std::vector<int> vec;
	while (!queue.empty())
	{
		TreeNode* node = queue.front();
		queue.pop();
		// vec.push_back(node->val);
		std::cout << node->val << std::endl;
		if(node->left != nullptr) queue.push(node->left);
		if(node->right != nullptr) queue.push(node->right);
	}
	return vec;

}

/*深度优先遍历-前序-root->left->right*/
void preOrder(TreeNode *root)
{
	if (root == nullptr) return;
	std::cout << root->val << std::endl;
	preOrder(root->left);
	preOrder(root->right);
}

/*深度优先遍历-中序-left->root->right*/
void midOrder(TreeNode* root)
{
	if (root == nullptr) return;
	midOrder(root->left);
	std::cout << root->val << std::endl;
	midOrder(root->right);
}

/*深度优先遍历-后序-left->right->root*/
void postOrder(TreeNode* root)
{
	if (root == nullptr) return;
	postOrder(root->left);
	postOrder(root->right);
	std::cout << root->val << std::endl;
}

