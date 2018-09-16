/*
 * AVLNode.h
 *
 *  Created on: Nov 28, 2017
 *      Author: drewh
 */

#include <iostream>
#include <string>
#include <iomanip>

#ifndef AVLNODE_H_
#define AVLNODE_H_

template <typename T>
class AVLNode
{
private:
	T* data;
	AVLNode* left;
	AVLNode* right;
public:
	AVLNode();
	AVLNode(T& info);
	~AVLNode();
	void setLeft(AVLNode<T>*);
	void setRight(AVLNode<T>*);
	void setData(T*);
	AVLNode* getLeft();
	AVLNode* getRight();
	T* getData();
};

template <typename T>
AVLNode<T>::AVLNode()
{
	data = NULL;
	left = NULL;
	right = NULL;
}

template <typename T>
AVLNode<T>::AVLNode(T& info)
{
	data = new T(info);
	left = NULL;
	right = NULL;
}

template <typename T>
void AVLNode<T>::setData(T* info)
{
	data = info;
}
template <typename T>
AVLNode<T>::~AVLNode()
{
	if (data != NULL)
	{
		delete data;
		data = NULL;
	}
	if (left != NULL)
	{
		delete left;
		left = NULL;
	}
	if (right != NULL)
	{
		delete right;
		right = NULL;
	}
}

template <typename T>
void AVLNode<T>::setLeft(AVLNode<T>* info)
{
	left = info;
}

template <typename T>
void AVLNode<T>::setRight(AVLNode<T>* info)
{
	right = info;
}

template <typename T>
AVLNode<T>* AVLNode<T>::getLeft()
{
	return left;
}

template <typename T>
AVLNode<T>* AVLNode<T>::getRight()
{
	return right;
}

template <typename T>
T* AVLNode<T>::getData()
{
	return data;
}
#endif /* AVLNODE_H_ */
