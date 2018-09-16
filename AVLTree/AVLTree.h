/*
 * AVLTree.h
 *
 *  Created on: Nov 28, 2017
 *      Author: drewh
 */


/*
 * Some of my code for the AVL tree, including the methods used for balancing, is modeled of some examples that I found
 * online, namely sanfoundry.com. I modified the code I found to better serve my this project and I did not copy and paste any code.
 */

#include <iostream>
#include <string>
#include <iomanip>
#include "AVLNode.h"


#ifndef AVLTREE_H_
#define AVLTREE_H_

template <typename T>
class AVLTree
{
protected:
	AVLNode<T>* root;
	int _height;
	int _diff;

public:
	AVLTree();
	~AVLTree();
	int height(AVLNode<T>*);
	int findDiff(AVLNode<T>*);
	int getDiff();
	int getHeight();
	void setRoot(AVLNode<T>*);
	AVLNode<T>* getRoot();
	AVLNode<T>* rrRotation(AVLNode<T>*);
	AVLNode<T>* llRotation(AVLNode<T>*);
	AVLNode<T>* rlRotation(AVLNode<T>*);
	AVLNode<T>* lrRotation(AVLNode<T>*);
	AVLNode<T>* balance(AVLNode<T>*);
};

template <typename T>
AVLTree<T>::AVLTree()
{
	root = NULL;
	_height = 0;
	_diff = 0;
}


template <typename T>
AVLTree<T>::~AVLTree()
{
	if (root != NULL)
	{
		delete root;
		root = NULL;
	}
}

template <typename T>
int AVLTree<T>::height(AVLNode<T>* temp)
{
	int h = 0;
	if (temp != NULL)
	{
		int heightl = height(temp->getLeft());
		int heightr = height(temp->getRight());
		int maxHeight = 0;
		if (heightl >= heightr)
		{
			maxHeight = heightl;
		}
		else
		{
			maxHeight = heightr;
		}
		h = maxHeight + 1;
	}
	return h;
}

template <typename T>
int AVLTree<T>::findDiff(AVLNode<T>* temp)
{
	int heightl = height(temp->getLeft());
	int heightr = height(temp->getRight());
	int heightDiff = heightl - heightr;
	return heightDiff;
}

template <typename T>
int AVLTree<T>::getDiff()
{
	return _diff;
}

template <typename T>
int AVLTree<T>::getHeight()
{
	return _height;
}

template <typename T>
AVLNode<T>* AVLTree<T>::getRoot()
{
	return root;
}

template <typename T>
void AVLTree<T>::setRoot(AVLNode<T>* data)
{
	root = data;
}

template <typename T>
AVLNode<T>* AVLTree<T>::rrRotation(AVLNode<T>* parent)
{
	AVLNode<T>* temp;
	temp = parent->getRight();
	parent->setRight(temp->getLeft());
	temp->setLeft(parent);
	return temp;
}

template <typename T>
AVLNode<T>* AVLTree<T>::llRotation(AVLNode<T>* parent)
{
	AVLNode<T>* temp;
	temp = parent->getLeft();
	parent->setLeft(temp->getRight());
	temp->setRight(parent);
	return temp;
}

template <typename T>
AVLNode<T>* AVLTree<T>::rlRotation(AVLNode<T>* parent)
{
	AVLNode<T>* temp;
	temp = parent->getRight();
	parent->setRight(llRotation(temp));
	return rrRotation(parent);
}

template <typename T>
AVLNode<T>* AVLTree<T>::lrRotation(AVLNode<T>* parent)
{
	AVLNode<T>* temp;
	temp = parent->getLeft();
	parent->setLeft(rrRotation(temp));
	return llRotation(parent);
}

template <typename T>
AVLNode<T>* AVLTree<T>::balance(AVLNode<T>* temp)
{
	int balFactor = findDiff(temp);
	if (balFactor > 1)
	{
		if (findDiff(temp->getLeft()) > 0)
		{
			temp = llRotation(temp);
		}
		else
		{
			temp = lrRotation(temp);
		}
	}
	else if (balFactor < -1)
	{
		if (findDiff(temp->getRight()) > 0)
		{
			temp = rlRotation(temp);
		}
		else
		{
			temp = rrRotation(temp);
		}
	}
	return temp;
}



#endif /* AVLTREE_H_ */
