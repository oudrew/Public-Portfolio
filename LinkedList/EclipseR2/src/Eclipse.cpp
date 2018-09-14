/*
 * Eclipse.cpp
 *
 *  Created on: Sep 26, 2017
 *      Author: drewh
 */

#include <iostream>
#include <string>
#include <iomanip>
#include "Eclipse.h"
using namespace std;



void Eclipse::addData(int i, string s)
{
	data[i] = s;
	columnNum ++;
	return;
}

int Eclipse::getColumnNum()
{
	return columnNum;
}
string Eclipse::getData(int i)
{
	return data[i];
}

string* Eclipse::getAllData()
{
	return data;
}

void Eclipse::fixLeadingZero()
{
	if (data[0] == "")
	{
		for (int i = 0; i < 19; i ++)
		{
			data[i] = data[i + 1];
		}
		columnNum --;
	}
	return;
}

Eclipse::Eclipse()
{
	data = new string[25];
	columnNum = 0;
	return;
}

Eclipse::Eclipse(const Eclipse& ECopy)
{
	data = new string[25];
	data = ECopy.data;
	columnNum = 0;
	return;
}

Eclipse::~Eclipse()
{
	delete[] data;
	return;
}

ostream& operator<< (ostream& s, Eclipse& eclipse)
{
	string output = "";

	for (int i = 0; i < 19; i ++)
	{
		output.append(eclipse.getData(i) + " ");
	}
	s << output;
	return s;
}

Eclipse& Eclipse::operator=(const Eclipse& ECopy)
{
	if (this != &ECopy)
	{
		delete[] data;
		data = new string[25];
		data = ECopy.data;
		return *this;
	}
}



