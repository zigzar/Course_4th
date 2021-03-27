#pragma once
struct TreeNode // структура для представления узлов дерева
{
	int key;
	int size;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int k) 
	{ 
		key = k; 
		left = right = 0; 
		size = 1; 
	}

public:
	TreeNode* find(TreeNode* p, int k);
	int getSize(TreeNode* p);
	void fixSize(TreeNode* p);
	TreeNode* insertRoot(TreeNode* p, int k);
	TreeNode* rotateRight(TreeNode* p);
	TreeNode* rotateLeft(TreeNode* q);
	TreeNode* insert(TreeNode* p, int k);
};