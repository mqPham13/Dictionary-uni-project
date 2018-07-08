#include "Preposition.h"
#include <iostream>
#include <string>
using namespace std;



string Preposition::getDef()
{
	string newDef;
	newDef = "(prep.)" + definition;
	return newDef;

}