#include "Adjective.h"
#include <iostream>
#include <string>
using namespace std;



string Adjective::getDef()
{
	string newDef;
	newDef = "(adj.)" + definition;
	return newDef;

}