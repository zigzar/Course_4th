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
	TreeNode* find(TreeNode* p, int k);					// поиск ключа k в дереве p
	int getSize(TreeNode* p);							// обертка для поля size, работает с пустыми деревьями (t=NULL)
	void fixSize(TreeNode* p);							// установка корректного размера дерева
	TreeNode* insertRoot(TreeNode* p, Newspaper* k);	// вставка нового узла с ключом k в корень дерева p
	TreeNode* rotateRight(TreeNode* p);					// правый поворот вокруг узла p
	TreeNode* rotateLeft(TreeNode* q);					// левый поворот вокруг узла q
	TreeNode* insert(TreeNode* p, Newspaper* k);		// рандомизированная вставка нового узла с ключом k в дерево p
};