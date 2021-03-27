#pragma once
#include "Newspaper.h"
struct TreeNode // структура для представления узлов дерева
{
	Newspaper* key;
	int size;
	TreeNode* left;
	TreeNode* right;

	TreeNode(Newspaper* k) 
	{ 
		key = k; 
		left = right = 0; 
		size = 1; 
	}

public:
	TreeNode* find(TreeNode* p, int k);
	int getSize(TreeNode* p);
	void fixSize(TreeNode* p);
	TreeNode* insertRoot(TreeNode* p, Newspaper* k);
	TreeNode* rotateRight(TreeNode* p);
	TreeNode* rotateLeft(TreeNode* q);
	TreeNode* insert(TreeNode* p, Newspaper* k);
};