#include "Noun.h"
#include <iostream>
#include <string>
using namespace std;

Noun::Noun(Word awo) //awo = a word object
{
	this->word = awo.getWord();
	this->definition = awo.getDef();
}


string Noun::getDef()
{

	return "(n.) " + definition;
	
}

