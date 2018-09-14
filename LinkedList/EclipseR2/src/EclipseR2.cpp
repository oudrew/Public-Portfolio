//============================================================================
// Name        : EclipseR2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "ResizeableArray.h"
#include "LinkedList.h"
using namespace std;

void search(ResizeableArray<Eclipse> &outputArray, ResizeableArray<Eclipse>* array, int bottom, int top, int column, string target)
{
	//searches the data using the 3 letter month abbreviations
	if (column == 4)
	{
		int value;
		if (target == "Jan")
		{
			value = 1;
		}
		if (target == "Feb")
		{
			value = 2;
		}
		if (target == "Mar")
		{
			value = 3;
		}
		if (target == "Apr")
		{
			value = 4;
		}
		if (target == "May")
		{
			value = 5;
		}
		if (target == "Jun")
		{
			value = 6;
		}
		if (target == "Jul")
		{
			value = 7;
		}
		if (target == "Aug")
		{
			value = 8;
		}
		if (target == "Sep")
		{
			value = 9;
		}
		if (target == "Oct")
		{
			value = 10;
		}
		if (target == "Nov")
		{
			value = 11;
		}
		if (target == "Dec")
		{
			value = 12;
		}
		while (bottom <= top)
		{
			int mid = (bottom + top) / 2;
			Eclipse* eclipse1;
			eclipse1 = array->getData(mid);
			int eclipse1Num = 0;
			if (eclipse1->getData(column) == "Jan")
			{
				eclipse1Num = 1;
			}
			if (eclipse1->getData(column) == "Feb")
			{
				eclipse1Num = 2;
			}
			if (eclipse1->getData(column) == "Mar")
			{
				eclipse1Num = 3;
			}
			if (eclipse1->getData(column) == "Apr")
			{
				eclipse1Num = 4;
			}
			if (eclipse1->getData(column) == "May")
			{
				eclipse1Num = 5;
			}
			if (eclipse1->getData(column) == "Jun")
			{
				eclipse1Num = 6;
			}
			if (eclipse1->getData(column) == "Jul")
			{
				eclipse1Num = 7;
			}
			if (eclipse1->getData(column) == "Aug")
			{
				eclipse1Num = 8;
			}
			if (eclipse1->getData(column) == "Sep")
			{
				eclipse1Num = 9;
			}
			if (eclipse1->getData(column) == "Oct")
			{
				eclipse1Num = 10;
			}
			if (eclipse1->getData(column) == "Nov")
			{
				eclipse1Num = 11;
			}
			if (eclipse1->getData(column) == "Dec")
			{
				eclipse1Num = 12;
			}
			if (eclipse1Num == value)
			{
				Eclipse* eclipse1;
				eclipse1 = array->getData(mid);
				outputArray.Add(eclipse1);
				int i = 1;
				int j = 1;
				while(eclipse1Num == value && (mid - i) >= 0)
				{
					eclipse1 = array->getData(mid - i);
					if (eclipse1->getData(column) == "Jan")
					{
						eclipse1Num = 1;
					}
					if (eclipse1->getData(column) == "Feb")
					{
						eclipse1Num = 2;
					}
					if (eclipse1->getData(column) == "Mar")
					{
						eclipse1Num = 3;
					}
					if (eclipse1->getData(column) == "Apr")
					{
						eclipse1Num = 4;
					}
					if (eclipse1->getData(column) == "May")
					{
						eclipse1Num = 5;
					}
					if (eclipse1->getData(column) == "Jun")
					{
						eclipse1Num = 6;
					}
					if (eclipse1->getData(column) == "Jul")
					{
						eclipse1Num = 7;
					}
					if (eclipse1->getData(column) == "Aug")
					{
						eclipse1Num = 8;
					}
					if (eclipse1->getData(column) == "Sep")
					{
						eclipse1Num = 9;
					}
					if (eclipse1->getData(column) == "Oct")
					{
						eclipse1Num = 10;
					}
					if (eclipse1->getData(column) == "Nov")
					{
						eclipse1Num = 11;
					}
					if (eclipse1->getData(column) == "Dec")
					{
						eclipse1Num = 12;
					}

					if (eclipse1Num == value)
					{
						outputArray.Add(eclipse1);
					}
					else
					{
						break;
					}
					i++;
				}
				while(eclipse1Num == value && (mid + j) != top)
				{
					eclipse1 = array->getData(mid + j);
					if (eclipse1->getData(column) == "Jan")
					{
						eclipse1Num = 1;
					}
					if (eclipse1->getData(column) == "Feb")
					{
						eclipse1Num = 2;
					}
					if (eclipse1->getData(column) == "Mar")
					{
						eclipse1Num = 3;
					}
					if (eclipse1->getData(column) == "Apr")
					{
						eclipse1Num = 4;
					}
					if (eclipse1->getData(column) == "May")
					{
						eclipse1Num = 5;
					}
					if (eclipse1->getData(column) == "Jun")
					{
						eclipse1Num = 6;
					}
					if (eclipse1->getData(column) == "Jul")
					{
						eclipse1Num = 7;
					}
					if (eclipse1->getData(column) == "Aug")
					{
						eclipse1Num = 8;
					}
					if (eclipse1->getData(column) == "Sep")
					{
						eclipse1Num = 9;
					}
					if (eclipse1->getData(column) == "Oct")
					{
						eclipse1Num = 10;
					}
					if (eclipse1->getData(column) == "Nov")
					{
						eclipse1Num = 11;
					}
					if (eclipse1->getData(column) == "Dec")
					{
						eclipse1Num = 12;
					}
					if (eclipse1Num == value)
					{
						outputArray.Add(eclipse1);
					}
					else
					{
						break;
					}
					j++;
				}
				break;
			}
			if (eclipse1Num < value)
			{
				bottom = mid + 1;
			}
			if (eclipse1Num > value)
			{
				top = mid - 1;
			}
		}
	}
	//searches non-numeric columns
	else if (column == 5 || column == 9 || column == 12 || column == 13 || column == 17)
	{
		while (bottom <= top)
		{
			int mid = (bottom + top) / 2;
			Eclipse* eclipse1;
			eclipse1 = array->getData(mid);

			if (eclipse1->getData(column) == target)
			{
				Eclipse* eclipse1;
				eclipse1 = array->getData(mid);
				outputArray.Add(eclipse1);
				int i = 1;
				int j = 1;
				while(eclipse1->getData(column) == target && (mid - i) >= 0)
				{
					eclipse1 = array->getData(mid - i);
					if (eclipse1->getData(column) == target)
					{
						outputArray.Add(eclipse1);
					}
					else
					{
						break;
					}
					i++;
				}
				while(eclipse1->getData(column) == target && (mid + j) != top)
				{
					eclipse1 = array->getData(mid + j);
					if (eclipse1->getData(column) == target)
					{
						outputArray.Add(eclipse1);
					}
					else
					{
						break;
					}
					j++;
				}
				break;
			}
			if (eclipse1->getData(column) < target)
			{
				bottom = mid + 1;
			}
			if (eclipse1->getData(column) > target)
			{
				top = mid - 1;
			}
		}
	}
	//searches numeric columns
	else
	{
		while (bottom <= top)
		{
			int mid = (bottom + top) / 2;
			Eclipse* eclipse1;
			eclipse1 = array->getData(mid);
			int eclipse1Num = atof(eclipse1->getData(column).c_str());
			int value = atof(target.c_str());
			if (eclipse1Num == value)
			{
				Eclipse* eclipse1;
				eclipse1 = array->getData(mid);
				outputArray.Add(eclipse1);
				int i = 1;
				int j = 1;
				while(eclipse1Num == value && (mid - i) >= 0)
				{
					eclipse1 = array->getData(mid - i);
					eclipse1Num = atof(eclipse1->getData(column).c_str());
					if (eclipse1Num == value)
					{
						outputArray.Add(eclipse1);
					}
					else
					{
						break;
					}
					i++;
				}
				while(eclipse1Num == value && (mid + j) != top)
				{
					eclipse1 = array->getData(mid + j);
					eclipse1Num = atof(eclipse1->getData(column).c_str());
					if (eclipse1Num == value)
					{
						outputArray.Add(eclipse1);
					}
					else
					{
						break;
					}
					j++;
				}
				break;
			}
			if (eclipse1Num < value)
			{
				bottom = mid + 1;
			}
			if (eclipse1Num > value)
			{
				top = mid - 1;
			}
		}
	}
}
void merge(ResizeableArray<Eclipse>* array, int bottom, int mid, int top, int column)
{
	int i = bottom;
	int j = mid + 1;
	ResizeableArray<Eclipse> temp;

	//uses the 3 letter month abbreviations to make comparisons
	if (column == 3)
	{
		while (i <= mid && j <= top)
		{
			Eclipse* eclipse1;
			eclipse1 = array->getData(i);
			int eclipse1Num = 0;
			Eclipse* eclipse2;
			int eclipse2Num = 0;
			eclipse2 = array->getData(j);
			if (eclipse1->getData(column) == "Jan")
			{
				eclipse1Num = 1;
			}
			if (eclipse1->getData(column) == "Feb")
			{
				eclipse1Num = 2;
			}
			if (eclipse1->getData(column) == "Mar")
			{
				eclipse1Num = 3;
			}
			if (eclipse1->getData(column) == "Apr")
			{
				eclipse1Num = 4;
			}
			if (eclipse1->getData(column) == "May")
			{
				eclipse1Num = 5;
			}
			if (eclipse1->getData(column) == "Jun")
			{
				eclipse1Num = 6;
			}
			if (eclipse1->getData(column) == "Jul")
			{
				eclipse1Num = 7;
			}
			if (eclipse1->getData(column) == "Aug")
			{
				eclipse1Num = 8;
			}
			if (eclipse1->getData(column) == "Sep")
			{
				eclipse1Num = 9;
			}
			if (eclipse1->getData(column) == "Oct")
			{
				eclipse1Num = 10;
			}
			if (eclipse1->getData(column) == "Nov")
			{
				eclipse1Num = 11;
			}
			if (eclipse1->getData(column) == "Dec")
			{
				eclipse1Num = 12;
			}

			if (eclipse2->getData(column) == "Jan")
			{
				eclipse2Num = 1;
			}
			if (eclipse2->getData(column) == "Feb")
			{
				eclipse2Num = 2;
			}
			if (eclipse2->getData(column) == "Mar")
			{
				eclipse2Num = 3;
			}
			if (eclipse2->getData(column) == "Apr")
			{
				eclipse2Num = 4;
			}
			if (eclipse2->getData(column) == "May")
			{
				eclipse2Num = 5;
			}
			if (eclipse2->getData(column) == "Jun")
			{
				eclipse2Num = 6;
			}
			if (eclipse2->getData(column) == "Jul")
			{
				eclipse2Num = 7;
			}
			if (eclipse2->getData(column) == "Aug")
			{
				eclipse2Num = 8;
			}
			if (eclipse2->getData(column) == "Sep")
			{
				eclipse2Num = 9;
			}
			if (eclipse2->getData(column) == "Oct")
			{
				eclipse2Num = 10;
			}
			if (eclipse2->getData(column) == "Nov")
			{
				eclipse2Num = 11;
			}
			if (eclipse2->getData(column) == "Dec")
			{
				eclipse2Num = 12;
			}

			if (eclipse1Num < eclipse2Num)
			{
				temp.Add(eclipse1);
				i++;
			}
			else
			{
				temp.Add(eclipse2);
				j++;
			}
		}
	}
	//makes comparisons on non-numeric rows
	else if (column == 5 || column == 9 || column == 12 || column == 13 || column == 17)
	{
		while (i <= mid && j <= top)
		{
			//cout << "into merge" << endl;
			Eclipse* eclipse1;
			eclipse1 = array->getData(i);
			Eclipse* eclipse2;
			eclipse2 = array->getData(j);

			string eclipse1Val = eclipse1->getData(column);
			string eclipse2Val = eclipse2->getData(column);
			if (eclipse1->getData(column) == "")
			{
				eclipse1Val = "999999999999";
			}
			if (eclipse2->getData(column) == "")
			{
				eclipse2Val = "999999999999";
			}
			if (eclipse1Val < eclipse2Val)
			{
				//cout << "loop 1" << endl;
				temp.Add(eclipse1);
				i++;
			}
			else
			{
				//cout << "loop 2" << endl;;
				temp.Add(eclipse2);
				j++;
			}
		}
	}
	//compares numeric rows
	else
	{
		while (i <= mid && j <= top)
		{
			//cout << "into merge" << endl;
			Eclipse* eclipse1;
			eclipse1 = array->getData(i);
			Eclipse* eclipse2;
			eclipse2 = array->getData(j);
			int eclipse1Num = atof(eclipse1->getData(column).c_str());
			int eclipse2Num = atof(eclipse2->getData(column).c_str());
			if (eclipse1->getData(column) == "")
			{
				eclipse1Num = 1000000;
			}
			if (eclipse2->getData(column) == "")
			{
				eclipse2Num = 1000000;
			}

			if (eclipse1Num < eclipse2Num)
			{
				//cout << "loop 1" << endl;
				temp.Add(eclipse1);
				i++;
			}
			else
			{
				//cout << "loop 2" << endl;;
				temp.Add(eclipse2);
				j++;
			}

		}
	}
	while (i <= mid)
	{
		Eclipse* eclipse1 = array->getData(i);
		temp.Add(eclipse1);
		i++;
	}
	while (j <= top)
	{
		Eclipse* eclipse2 = array->getData(j);
		temp.Add(eclipse2);
		j++;
	}
	for (int i = bottom; i <= top; i ++)
	{
		array->ReplaceAt(temp.getData(i - bottom), i);
	}

	return;
}

/*
 * splits the data into smaller pieces and merges them together sorted
 */
void sort(ResizeableArray<Eclipse>* array, int bottom, int top, int column)
{
	int middle = 0;
	if (bottom < top)
	{
		middle = (top + bottom) / 2;
		sort(array, bottom, middle, column);
		sort(array, middle + 1, top, column);
		merge(array, bottom, middle, top, column);
	}
}


void addLinkedList(LinkedList<Eclipse>* list, Eclipse* eclipse)
{
	LinkedList<Eclipse>* newList = new LinkedList<Eclipse>(*eclipse);
	if (list->getNext() == 0)
	{
		list->setNext(newList);
	}
	else if (list->getNext()->getData()->getData(0) == eclipse->getData(0))
	{
		newList->setNext(list->getNext()->getNext());
		list->setNext(newList);
	}
	else if (atoi(list->getNext()->getData()->getData(0).c_str()) > atoi(eclipse->getData(0).c_str()))
	{
		newList->setNext(list->getNext());
		list->setNext(newList);
	}
	else
	{
		addLinkedList(list->getNext(), eclipse);
	}

}

void deleteLinkedList(LinkedList<Eclipse>* list, Eclipse* eclipse)
{
	if (list->getNext() == 0)
	{
		return;
	}
	else if (eclipse->getData(0) == list->getNext()->getData()->getData(0))
	{
		list->setNext(list->getNext()->getNext());
	}
	else
	{
		deleteLinkedList(list->getNext(), eclipse);
	}
}

int main() {
	ifstream inFile;
	string file;
	string header[10];
	string idNums[12000];
	int validEclipses = 0;
	int x = 0;
	int linesRead = 0;
	int sortedBy;
	LinkedList<Eclipse>* head = new LinkedList<Eclipse>();
	cout << "Please select a file to open" << endl;
	getline(cin, file);
	inFile.open(file);
	if (!inFile)
	{
		cerr << "File is not available" << endl;
		return 1;
	}
	//skips the first 10 lines

	string currentLine;
	for (int i = 0; i < 10; i++)
	{
		getline(inFile, currentLine);
		header[i] = currentLine;
	}
	while (inFile.good())
	{
		Eclipse* eclipse = new Eclipse();

		int counter = -1;
		int numTimes = 0;
		int arrcount = 0;
		int sortedBy;
		int validEclipses = 0;
		getline(inFile, currentLine);

		linesRead ++;

		//splits the string at the spaces
		for (int i = 0; i < currentLine.length(); i ++)
		{
			if (i == currentLine.length() - 1)
			{
				(*eclipse).addData(arrcount, currentLine.substr(counter + 1));
			}
			else if ((currentLine.at(i) == ' ') && (currentLine.at(i+1) == ' '))
			{

			}
			else if (currentLine.at(i) == ' ')
			{
				(*eclipse).addData(arrcount, currentLine.substr(counter + 1, numTimes));
				arrcount ++;
				counter = i;
				numTimes = 0;
			}
			else
			{
				numTimes ++;
			}
		}

		(*eclipse).fixLeadingZero();

		if ((*eclipse).getData(9).front() == 'P')
		{
			if ((*eclipse).getColumnNum() != 16)
			{
				cerr << "Error in data row " << x << ": " << (*eclipse).getColumnNum() << " columns found. Should be 16" << endl;
				continue;
			}
		}
		else
		{
			if ((*eclipse).getColumnNum() != 18)
			{
				cerr << "Error in data row " << x + 1 << ": " << (*eclipse).getColumnNum() << " columns found. Should be 18" << endl;
				continue;
			}
		}

		bool digit = true;
		int badCol;

		for (int i = 0; i < (*eclipse).getColumnNum(); i ++)
		{

			if ((i == 0) || (i==1) || (i == 2) || (i == 4) || (i == 6) || (i == 7) || (i == 8) || (i == 14) || (i == 15) || (i == 16))
			{
				for (int j = 0; j < (*eclipse).getData(i).length(); j ++)
				{
					if (((*eclipse).getData(i).at(j) == '-') || ((*eclipse).getData(i).at(j) == ' '))
					{

					}
					else if (isdigit((*eclipse).getData(i).at(j)) == 0)
					{
						digit = false;
						badCol = i;
					}
				}
			}
			if (digit == false)
			{
				break;
			}
		}

		//prints an error if one of the specified rows doesnt contain a whole number
		if (digit == false)
		{
			cerr << "Error in data row " << x + 1 << ": Column " << badCol + 1 << " is not a whole number." << endl;
			//x++;
			continue;
		}

		for (int i = 0; i < (*eclipse).getColumnNum(); i ++)
		{

			if ((i == 10) || (i == 11))
			{
				for (int j = 0; j < (*eclipse).getData(i).length(); j ++)
				{
					if (((*eclipse).getData(i).at(j) == '-') || ((*eclipse).getData(i).at(j) == '.'))
					{

					}
					else if (isdigit((*eclipse).getData(i).at(j)) == 0)
					{
						digit = false;
						badCol = i;
					}
				}
			}
			if (digit == false)
			{
				break;
			}
		}

		//prints out an error if there is not a decimal number in one of the specified rows
		if (digit == false)
		{
			cerr << "Error in data row " << x + 1 << ": Column " << badCol + 1 << " is not a decimal number." << endl;
			//x++;
			continue;
		}

		validEclipses ++;

		//checks for duplicate entries
		bool stop = false;
		int repeatedIndex;

		for (int i = 0; i < 12000; i ++)
		{
			if (idNums[i] == eclipse->getData(0))
			{
				stop = true;
				repeatedIndex = i;
				break;
			}
		}
		if (stop == true)
		{
			cerr << "Error in data row " << x + 1 << ": Duplicate catalog number " << (*eclipse).getData(0) << "." << endl;
			continue;
		}
		//adds the entry number to idNums

		idNums[x] = eclipse->getData(0);

		addLinkedList(head, eclipse);
		x++;
	}
	/*
	LinkedList<Eclipse>* temp;
	LinkedList<Eclipse>* temp1;
	temp1 = head->getNext();
	temp = head->getNext();
	while (temp != 0)
	{
		temp1 = temp;
		cout << *temp->getData() << endl;
		temp = temp1->getNext();
	}
	 */
	ResizeableArray<Eclipse> array;
	ResizeableArray<Eclipse>* arrayPointer;
	arrayPointer = &array;

	LinkedList<Eclipse>* temp;
	LinkedList<Eclipse>* temp1;
	temp1 = head->getNext();
	temp = head->getNext();
	while (temp != 0)
	{
		temp1 = temp;
		array.Add(temp->getData());
		temp = temp1->getNext();
	}

	string userInput;
	while (true)
	{
		cout << "Type 'O' for output, 'S' for sort, 'F' for find, 'M' for merge, 'P' for purge, 'C' for catalog order, or 'Q' for quit" << endl;
		getline(cin, userInput);

		if (userInput == "Q")
		{
			cout << "Goodbye!" << endl;
			break;
		}
		if (userInput == "C")
		{
			LinkedList<Eclipse>* temp;
			LinkedList<Eclipse>* temp1;
			temp1 = head->getNext();
			temp = head->getNext();
			while (temp != 0)
			{
				temp1 = temp;
				cout << *temp->getData() << endl;
				temp = temp1->getNext();
			}
		}

		if (userInput == "P")
		{
			ifstream purgeFile;
			string s;
			cout << "Please select a file to purge" << endl;
			getline(cin, s);
			purgeFile.open(s);
			if (!purgeFile)
			{
				cerr << "File is not available" << endl;
				continue;
			}
			int x = 0;
			for (int i = 0; i < 10; i++)
			{
				getline(purgeFile, currentLine);
				header[i] = currentLine;
			}
			while (purgeFile.good())
			{
				Eclipse* eclipse1 = new Eclipse();

				string currentLine;
				int counter = -1;
				int numTimes = 0;
				int arrcount = 0;
				getline(purgeFile, currentLine);

				linesRead ++;

				//splits the string at the spaces
				for (int i = 0; i < currentLine.length(); i ++)
				{
					if (i == currentLine.length() - 1)
					{
						(*eclipse1).addData(arrcount, currentLine.substr(counter + 1));
					}
					else if ((currentLine.at(i) == ' ') && (currentLine.at(i+1) == ' '))
					{

					}
					else if (currentLine.at(i) == ' ')
					{
						(*eclipse1).addData(arrcount, currentLine.substr(counter + 1, numTimes));
						arrcount ++;
						counter = i;
						numTimes = 0;
					}
					else
					{
						numTimes ++;
					}
				}

				(*eclipse1).fixLeadingZero();
				deleteLinkedList(head, eclipse1);
				x++;
			}
			ResizeableArray<Eclipse>* newArray = new ResizeableArray<Eclipse>();
			LinkedList<Eclipse>* temp;
			LinkedList<Eclipse>* temp1;
			temp1 = head->getNext();
			temp = head->getNext();
			while (temp != 0)
			{
				temp1 = temp;
				newArray->Add(temp->getData());
				temp = temp1->getNext();
			}
			delete arrayPointer;
			arrayPointer = newArray;
		}

		if (userInput == "M")
		{
			ifstream mergeFile;
			string s;
			cout << "Please input a file to merge" << endl;
			getline(cin, s);
			mergeFile.open(s);
			if (!mergeFile)
			{
				cerr << "File is not available" << endl;
				continue;
			}
			int x = 0;
			for (int i = 0; i < 10; i++)
			{
				getline(mergeFile, currentLine);
				header[i] = currentLine;
			}
			while (mergeFile.good())
			{
				Eclipse* eclipse1 = new Eclipse();

				string currentLine;
				int counter = -1;
				int numTimes = 0;
				int arrcount = 0;
				getline(mergeFile, currentLine);

				linesRead ++;

				//splits the string at the spaces
				for (int i = 0; i < currentLine.length(); i ++)
				{
					if (i == currentLine.length() - 1)
					{
						(*eclipse1).addData(arrcount, currentLine.substr(counter + 1));
					}
					else if ((currentLine.at(i) == ' ') && (currentLine.at(i+1) == ' '))
					{

					}
					else if (currentLine.at(i) == ' ')
					{
						(*eclipse1).addData(arrcount, currentLine.substr(counter + 1, numTimes));
						arrcount ++;
						counter = i;
						numTimes = 0;
					}
					else
					{
						numTimes ++;
					}
				}

				(*eclipse1).fixLeadingZero();
				addLinkedList(head, eclipse1);
				x++;
			}
			ResizeableArray<Eclipse>* newArray = new ResizeableArray<Eclipse>();
			LinkedList<Eclipse>* temp;
			LinkedList<Eclipse>* temp1;
			temp1 = head->getNext();
			temp = head->getNext();
			while (temp != 0)
			{
				temp1 = temp;
				newArray->Add(temp->getData());
				temp = temp1->getNext();
			}
			delete arrayPointer;
			arrayPointer = newArray;
		}
		if (userInput == "S")
		{
			cout << "Please select a column by which to sort"<< endl;
			string s;
			getline(cin, s);
			sort(arrayPointer, 0, arrayPointer->getElementNum()-1, atoi(s.c_str()) - 1);
			sortedBy = atoi(s.c_str());
		}
		if (userInput == "F")
		{
			ResizeableArray<Eclipse> outputArray;
			cout << "Please select a column to search over" << endl;
			string s;
			getline(cin, s);
			if ((s == "1") || (s=="2") || (s == "3") || (s == "5") || (s == "7") || (s == "8") || (s == "9") || (s == "11") || (s == "12") || (s == "15") || (s == "16") || (s == "17"))
			{
				cout << "Please select a value to search for" << endl;
				string value;
				bool valid = true;
				int eclipsesFound = 0;
				getline(cin, value);
				for (int i = 0; i < s.length(); i ++)
				{
					if (value.at(i) == '-' || value.at(i) == ',')
					{

					}
					else if (isdigit(value.at(i)) == 0)
					{
						valid = false;
					}
				}
				if (valid == true)
				{
					if (atoi(value.c_str()) == sortedBy)
					{
						search(outputArray, arrayPointer, 0, arrayPointer->getElementNum() - 1, atoi(s.c_str() - 1), value);
					}
					else
					{
						for (int i = 0; i < arrayPointer->getElementNum(); i ++)
						{
							if (arrayPointer->getData(i)->getData(atoi(s.c_str()) - 1) == value)
							{
								Eclipse* eclipse1;
								eclipse1 = arrayPointer->getData(i);
								outputArray.Add(eclipse1);
								eclipsesFound ++;
							}
						}
					}
					for (int i = 0; i < 10; i ++)
					{
						cout << header[i] << endl;
					}
					cout << outputArray;
					cout << "Eclipses found: " << eclipsesFound << endl;
				}

			}
			else if (s == "6" || s == "10" || s == "13" || s == "14" || s == "18")
			{
				int eclipsesFound = 0;
				cout << "Please select a value to search for" << endl;
				string value;
				//cin >> value;
				getline(cin, value);
				if (atoi(value.c_str()) == sortedBy)
				{
					search(outputArray, arrayPointer, 0, arrayPointer->getElementNum() - 1, atoi(s.c_str() - 1), value);
				}
				else
				{
					for (int i = 0; i < arrayPointer->getElementNum(); i ++)
					{
						if (arrayPointer->getData(i)->getData(atoi(s.c_str()) - 1) == value)
						{
							Eclipse* eclipse1;
							eclipse1 = arrayPointer->getData(i);
							outputArray.Add(eclipse1);
							eclipsesFound ++;
						}
					}
				}
				for (int i = 0; i < 10; i ++)
				{
					cout << header[i] << endl;
				}
				cout << outputArray;
				cout << "Eclipses found: " << eclipsesFound << endl;
			}
			else if (s == "4")
			{
				int eclipsesFound = 0;
				cout << "Please select a value to search for" << endl;
				string value;
				getline(cin, value);
				if (value == "Jan" || value == "Feb" || value == "Mar" || value == "Apr" || value == "May" || value == "Jun" || value == "Jul" || value == "Aug" || value == "Sep"
						|| value == "Oct" || value == "Nov" || value == "Dec")
				{
					if (atoi(value.c_str()) == sortedBy)
					{
						search(outputArray, arrayPointer, 0, arrayPointer->getElementNum() - 1, atoi(s.c_str() - 1), value);
					}
					else
					{
						for (int i = 0; i < arrayPointer->getElementNum(); i ++)
						{
							if (arrayPointer->getData(i)->getData(atoi(s.c_str()) - 1) == value)
							{
								Eclipse* eclipse1;
								eclipse1 = arrayPointer->getData(i);
								outputArray.Add(eclipse1);
								eclipsesFound ++;
							}
						}
					}
					for (int i = 0; i < 10; i ++)
					{
						cout << header[i] << endl;
					}
					cout << outputArray;
					cout << "Eclipses found: " << eclipsesFound << endl;
				}
			}
		}

		if (userInput == "O")
		{
			string s;
			ofstream outFile;
			cout << "Please specify a file to write to" << endl;
			getline(cin, s);
			if (s == "")
			{
				for (int i = 0; i < 10; i ++)
				{
					cout << header[i] << endl;
				}
				cout << *arrayPointer;
				cout << "Data lines read: " << linesRead << "; Valid eclipses read: " << validEclipses << "; Eclipses in memory: " << array.getElementNum() << endl;
			}
			else
			{
				outFile.open(s);
				if (outFile.is_open())
				{
					cerr << "File is not available." << endl;
				}
				else
				{
					for (int i = 0; i < 10; i ++)
					{
						outFile << header[i] << endl;
					}
					outFile << array;
					outFile << "Data lines read: " << linesRead << "; Valid eclipses read: " << validEclipses << "; Eclipses in memory: " << array.getElementNum() << endl;
				}
			}
		}
	}
	return 0;
}
