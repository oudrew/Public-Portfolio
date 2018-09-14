/*
 * LinkedHashTable.h
 *
 *  Created on: Nov 12, 2017
 *      Author: drewh
 */
#include <iostream>
#include <string>
#include <iomanip>
#include "LinkedList.h"
using namespace std;
#ifndef LINKEDHASHTABLE_H_
#define LINKEDHASHTABLE_H_

//Good hashing function?
//Is tablesize % ID a good function?
//what is the difference between printing out the list and printing the contents of the table?
//How to decide table size/what is a good load factor?
template <typename T>
class LinkedHashTable
{
private:
	LinkedList<T>* hashList;
	LinkedList<T>** data;
	int tableSize;
	int keys[];
public:
	LinkedHashTable();
	LinkedHashTable(int size);
	~LinkedHashTable();
	LinkedList<T>* getData(int index);
	bool isEmptyAt(int key);
	void printList();
	void setData(int key, LinkedList<T>* entry);
	void add(int key, LinkedList<T>* entry);
	LinkedList<T>* getList();
	void addKey(int position, int key);
	int getTableSize();
};

template <typename T>
LinkedHashTable<T>::LinkedHashTable()
{
	data = new LinkedList<T>* [10];
	hashList = new LinkedList<T>();
	tableSize = 10;
	keys[10] = {-1};
}

template <typename T>
LinkedHashTable<T>::LinkedHashTable(int size)
{
	data = new LinkedList<T>* [size + (size / 4)];
	hashList = new LinkedList<T>();
	tableSize = size;
	keys[size] = {-1};
}

template <typename T>
LinkedHashTable<T>::~LinkedHashTable()
{
	delete hashList;
	delete[] data;
	data = NULL;
}

template <typename T>
LinkedList<T>* LinkedHashTable<T>::getData(int index)
{
	return data[index];
}

template <typename T>
int LinkedHashTable<T>::getTableSize()
{
	return tableSize;
}

template <typename T>
void LinkedHashTable<T>::printList()
{
	LinkedList<T>* temp;
	LinkedList<T>* temp1;
	temp1 = hashList->getNext();
	temp = hashList->getNext();
	while (temp != 0)
	{
		temp1 = temp;
		cout << temp->getData() << endl;
		temp = temp1->getNext();
	}
}

template <typename T>
void LinkedHashTable<T>::add(int key, LinkedList<T>* entry)
{
	if (data[key] == NULL)
	{
		data[key] = entry;
	}
	else
	{
		data[key]->setNext(entry);
	}
}

template <typename T>
void LinkedHashTable<T>::setData(int key, LinkedList<T>* entry)
{
	data[key] = entry;
}

template <typename T>
bool LinkedHashTable<T>::isEmptyAt(int key)
{
	for (int i = 0; i < tableSize; i ++)
	{
		if (keys[i] = key)
		{
			return true;
		}
	}
}

template <typename T>
void LinkedHashTable<T>::addKey(int position, int key)
{
	keys[position] = key;
}

template <typename T>
LinkedList<T>* LinkedHashTable<T>::getList()
{
	return hashList;
}

#endif /* LINKEDHASHTABLE_H_ */
