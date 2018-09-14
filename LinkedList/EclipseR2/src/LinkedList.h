/*
 * LinkedList.h
 *
 *  Created on: Oct 26, 2017
 *      Author: drewh
 */
#include <iostream>
#include <string>
#include <iomanip>
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

/*
 * How do I insert eclipses based on index number into a templated LinkedList class?
 * How much functionality needs to be captured by the templated class?
 */
template<typename T>
class LinkedList
{
protected:
	T* data;
	LinkedList* next;
public:
	LinkedList();
	LinkedList(T& info);
	~LinkedList();
	bool isEmpty();
	void setNext(LinkedList<T>*);
	LinkedList* getNext();
	T* getData();
};

template <typename T>
LinkedList<T>::LinkedList()
{
	data = NULL;
	next = NULL;
}

template <typename T>
LinkedList<T>::LinkedList(T& info)
{
	data = new T(info); 		//Why use new?
	next = NULL;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
	if (data != NULL)
	{
		delete data;
		data = NULL;
	}
	if (next != NULL)
	{
		delete next;
		next = NULL;
	}
}

template <typename T>
bool LinkedList<T>::isEmpty()
{
	if (data == NULL)
	{
		return true;
	}
	return false;
}

template <typename T>
void LinkedList<T>::setNext(LinkedList<T>* data)
{
	next = data;
}

template <typename T>
LinkedList<T>* LinkedList<T>::getNext()
{
	return next;
}

template <typename T>
T* LinkedList<T>::getData()
{
	return data;
}



#endif /* LINKEDLIST_H_ */
