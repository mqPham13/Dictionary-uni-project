#include "Verb.h"
#include <iostream>
#include <string>
using namespace std;



string Verb::getDef()
{
	string newDef;
	newDef = "(v.)" + definition;
	return newDef;

}