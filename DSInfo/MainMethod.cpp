/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Program to display info header
* January, 16, 2016 */

#include <iostream>
#include "Info.h"
using namespace std;

void main()
{
	Info myInfo("Paul Heintz", 1, "Info Class");
	myInfo.displayInfo();

	cin.ignore();
}