#include "MiscWord.h"
#include <iostream>
#include <string>
using namespace std;



string MiscWord::getDef()
{
	string newDef;
	newDef = "(misc.)" + definition;
	return newDef;

}