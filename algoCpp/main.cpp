#include "hash_map.h"
#include "binary_tree.h"
#include "graph.h"
#include "algo.h"


int main()
{
	TreeNode* n1 = new TreeNode(1);
	TreeNode* n2 = new TreeNode(2);
	TreeNode* n3 = new TreeNode(3);
	TreeNode* n4 = new TreeNode(4);
	TreeNode* n5 = new TreeNode(5);
	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n3->right = n5;
	LevelOrder(n1);

	ArrayHashMap hash;
	hash.put(120, "ÔÆÉ½");
	hash.print();

	std::vector<int> vectices = { 1, 2, 3, 4, 5 };
	std::vector<std::vector<int>> edges;
	edges.push_back({ 0, 2 });
	edges.push_back({ 2, 3 });
	edges.push_back({ 1,4 });
	GraphAdjMat adjMat(vectices, edges);
	adjMat.print();
	std::vector<int> nums = { 1,4,1,2,8,5,9,6 };
	selectionSort(nums);
	for (int n : nums) std::cout << n;
	std::cin.get();
};