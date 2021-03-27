#pragma once
#include "../include/RBST.h"
#include <iostream>

TreeNode* TreeNode::find(TreeNode* p, int k) // ����� ����� k � ������ p
{
    if (!p) return 0; // � ������ ������ ����� �� ������
    if (k == p->key)
        return p;
    if (k < p->key)
        return find(p->left, k);
    else
        return find(p->right, k);
}

TreeNode* TreeNode::insert(TreeNode* p, int k) // ����������������� ������� ������ ���� � ������ k � ������ p
{
	if (!p) return new TreeNode(k);
	if (rand() % (p->size + 1) == 0)
		return insertRoot(p, k);
	if (p->key > k)
		p->left = insert(p->left, k);
	else
		p->right = insert(p->right, k);
	fixSize(p);
	return p;
}

int TreeNode::getSize(TreeNode* p) // ������� ��� ���� size, �������� � ������� ��������� (t=NULL)
{
	if (!p) return 0;
	return p->size;
}

void TreeNode::fixSize(TreeNode* p) // ������������ ����������� ������� ������
{
	p->size = getSize(p->left) + getSize(p->right) + 1;
}

TreeNode* TreeNode::rotateRight(TreeNode* p) // ������ ������� ������ ���� p
{
	TreeNode* q = p->left;
	if (!q) return p;
	p->left = q->right;
	q->right = p;
	q->size = p->size;
	fixSize(p);
	return q;
}

TreeNode* TreeNode::rotateLeft(TreeNode* q) // ����� ������� ������ ���� q
{
	TreeNode* p = q->right;
	if (!p) return q;
	q->right = p->left;
	p->left = q;
	p->size = q->size;
	fixSize(q);
	return p;
}

TreeNode* TreeNode::insertRoot(TreeNode* p, int k) // ������� ������ ���� � ������ k � ������ ������ p 
{
	if (!p) return new TreeNode(k);
	if (k < p->key)
	{
		p->left = insertRoot(p->left, k);
		return rotateRight(p);
	}
	else
	{
		p->right = insertRoot(p->right, k);
		return rotateLeft(p);
	}
}