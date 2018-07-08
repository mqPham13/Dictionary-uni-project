#include "Adverb.h"
#include <iostream>
#include <string>
using namespace std;



string Adverb::getDef()
{
	string newDef;
	newDef = "(adv.)" + definition;
	return newDef;

}