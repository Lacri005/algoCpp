#pragma once
#ifndef _BINARY_TREE_
#define _BINARY_TREE_

#include <iostream>
#include <vector>
#include <queue>
#include <string>


struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(nullptr), right(nullptr) {}
};

std::vector<int> LevelOrder(TreeNode* root);
void preOrder(TreeNode* root);
void midOrder(TreeNode* root);
void postOrder(TreeNode* root);

#endif

