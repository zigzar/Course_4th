#pragma once
#include "Newspaper.h"
struct TreeNode // ��������� ��� ������������� ����� ������
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
	TreeNode* find(TreeNode* p, int k);					// ����� ����� k � ������ p
	int getSize(TreeNode* p);							// ������� ��� ���� size, �������� � ������� ��������� (t=NULL)
	void fixSize(TreeNode* p);							// ��������� ����������� ������� ������
	TreeNode* insertRoot(TreeNode* p, Newspaper* k);	// ������� ������ ���� � ������ k � ������ ������ p
	TreeNode* rotateRight(TreeNode* p);					// ������ ������� ������ ���� p
	TreeNode* rotateLeft(TreeNode* q);					// ����� ������� ������ ���� q
	TreeNode* insert(TreeNode* p, Newspaper* k);		// ����������������� ������� ������ ���� � ������ k � ������ p
};