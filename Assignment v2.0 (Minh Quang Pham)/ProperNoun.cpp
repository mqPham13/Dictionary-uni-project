#include "ProperNoun.h"
#include <iostream>
#include <string>
using namespace std;


ProperNoun::ProperNoun(Word awo):Noun(awo)
{
	this->word = awo.getWord();
	this->definition = awo.getDef();
}

string ProperNoun::getDef()
{
	string newDef;
	newDef = "(n.)" + definition;
	return newDef;

}

string ProperNoun::getWord()
{
	for (int i = 0; i < word.size(); ++i)
	{
		word[0] = toupper(word[0]);
		break;
	}
	return word;
}