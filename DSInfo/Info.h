/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Info header
* January, 16, 2016 */

#ifndef INFO_H
#define INFO_H
#include <string>
#include <iostream>
using namespace std;

class Info
{
private:
	string name;
	string assignName;
	int assignNum;

public:
	Info();
	Info(string myName, int assignmentNum, string assignmentName);
	~Info();
	void displayInfo();
	void setName(string myName);
	string getName();
	void setAssignName(string assignmentName);
	string getAssignName();
	void setAssignNum(int assignmentNum);
	int getAssignNum();
};

#endif // !"Info.h"
