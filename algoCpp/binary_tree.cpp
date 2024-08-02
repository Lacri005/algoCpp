/*������*/
#include "binary_tree.h"


/*�������ı���-�������-������ȱ���*/
std::vector<int> LevelOrder(TreeNode * root)
{
	/*��ʼ�����У��������ڵ���������*/
	std::queue<TreeNode*> queue;
	queue.push(root);
	/*ʹ�ö�̬�����Ŷ���������*/
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

/*������ȱ���-ǰ��-root->left->right*/
void preOrder(TreeNode *root)
{
	if (root == nullptr) return;
	std::cout << root->val << std::endl;
	preOrder(root->left);
	preOrder(root->right);
}

/*������ȱ���-����-left->root->right*/
void midOrder(TreeNode* root)
{
	if (root == nullptr) return;
	midOrder(root->left);
	std::cout << root->val << std::endl;
	midOrder(root->right);
}

/*������ȱ���-����-left->right->root*/
void postOrder(TreeNode* root)
{
	if (root == nullptr) return;
	postOrder(root->left);
	postOrder(root->right);
	std::cout << root->val << std::endl;
}

