/*
 * ResizeableArray.h
 *
 *  Created on: Sep 26, 2017
 *      Author: drewh
 */
#include "Eclipse.h"
#include <iostream>
#include <string>
#include <iomanip>
#ifndef RESIZEABLEARRAY_H_
#define RESIZEABLEARRAY_H_
using namespace std;

template<typename T>
class ResizeableArray
{
	friend std::ostream& operator<< (std::ostream& s, ResizeableArray& array);
	private:
		T** allData;
		int arraySize;
		int elementNum;
	public:
		ResizeableArray();
		ResizeableArray(int size);
		~ResizeableArray();
		void Add(T* eclipse);
		void AddAt(T* eclipse, int index);
		void ReplaceAt(T* eclipse, int index);
		void RemoveAt(int index);
		void doubleSize();
		void halfSize();
		int getElementNum();
		T* getData(int i);
};

template <typename T>
ResizeableArray<T>::ResizeableArray()
{
	allData = new T* [10];
	arraySize = 10;
	elementNum = 0;
	return;
}

template <typename T>
ResizeableArray<T>::ResizeableArray(int size)
{
	allData = new T* [size];
	arraySize = size;
	elementNum = 0;
	return;
}

template <typename T>
int ResizeableArray<T>::getElementNum()
{
	return elementNum;
}

template <typename T>
void ResizeableArray<T>::Add(T* eclipse)
{
	if (elementNum > arraySize - 1)
	{
		this->doubleSize();
	}

	allData[elementNum] = eclipse;
	elementNum ++;
	return;
}

template <typename T>
void ResizeableArray<T>::AddAt(T* eclipse, int index)
{
	if (index = elementNum)
	{
		this->Add(eclipse);
	}
	if (elementNum > arraySize - 1)
	{
		this->doubleSize();
	}

	for (int i = elementNum - 1; i >= index; i --)
	{
		allData[i + 1] = allData[i];
	}

	allData[index] = eclipse;
	elementNum ++;
	return;
}

template <typename T>
void ResizeableArray<T>::ReplaceAt(T* eclipse, int index)
{
	allData[index] = eclipse;
}

template <typename T>
void ResizeableArray<T>::RemoveAt(int index)
{
	if (elementNum < arraySize / 2)
	{
		this->halfSize();
	}
	for (int i = index; i < elementNum; i ++)
	{
		allData[i] = allData[i + 1];
	}
	elementNum --;
	return;
}

template <typename T>
T* ResizeableArray<T>::getData(int i)
{
	return allData[i];
}

template <typename T>
void ResizeableArray<T>::doubleSize()
{
	T** newArray = new T* [arraySize * 2];
	for (int i = 0; i < arraySize; i ++)
	{
		newArray[i] = allData[i];
	}
	delete[] allData;
	allData = newArray;
	arraySize = arraySize * 2;
	return;
}

template <typename T>
void ResizeableArray<T>::halfSize()
{
	T** newArray = new T* [arraySize / 2];
	for (int i = 0; i < arraySize; i ++)
	{
		newArray[i] = allData[i];
	}
	delete[] allData;
	allData = newArray;
	arraySize = arraySize / 2;
	return;
}

template <typename T>
ResizeableArray<T>::~ResizeableArray()
{
	delete[] allData;
	return;
}

ostream& operator<< (ostream& s, ResizeableArray<Eclipse>& array)
{
	for (int i = 0; i < array.getElementNum(); i ++)
	{
		cout << *array.getData(i);
		cout << endl;
	}
}






#endif /* RESIZEABLEARRAY_H_ */
