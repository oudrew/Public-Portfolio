/*
 * Eclipse.h
 *
 *  Created on: Sep 26, 2017
 *      Author: drewh
 */

#include <string>
#ifndef ECLIPSE_H_
#define ECLIPSE_H_

class Eclipse
{
	friend std::ostream& operator<< (std::ostream& s, Eclipse& eclipse);
	Eclipse& operator=(const Eclipse& ECopy);
public:
	void addData(int i, std::string s);
	void fixLeadingZero();
	int getColumnNum();
	std::string* getAllData();
	std::string getData(int i);
	Eclipse();
	Eclipse(const Eclipse& ECopy);
	~Eclipse();
private:
	std::string* data;
	int columnNum;
};



#endif /* ECLIPSE_H_ */
