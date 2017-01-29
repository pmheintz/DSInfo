/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Info source
* January, 16, 2016 */

#include "Info.h"

Info::Info() //Default constructor
{
	name = "Paul Heintz";
	assignName = "Undefined";
	assignNum = NULL;
}

Info::Info(string myName, int assignmentNum, string assignmentName) //overloaded constructor
{
	name = myName;
	assignNum = assignmentNum;
	assignName = assignmentName;
}

Info::~Info()
{
}

void Info::displayInfo()
{
	cout << "*******************************************************************************" << endl;
	cout << "* Programmer:      " << name << endl;
	cout << "* Course:          ITDEV154 - Data Structures" << endl;
	cout << "* Instructor:      Judith Ligocki" << endl;
	cout << "* Assignment:      " << assignNum << " - " << assignName << endl;
	cout << "* Compile Date:    " << __DATE__ << " " << __TIME__ << endl;
	cout << "*******************************************************************************" << endl;
}
// getters and setters
void Info::setName(string myName)
{
	name = myName;
}

string Info::getName()
{
	return name;
}

void Info::setAssignName(string assignmentName)
{
	assignName = assignmentName;
}

string Info::getAssignName()
{
	return assignName;
}

void Info::setAssignNum(int assignmentNum)
{
	assignNum = assignmentNum;
}

int Info::getAssignNum()
{
	return assignNum;
}
