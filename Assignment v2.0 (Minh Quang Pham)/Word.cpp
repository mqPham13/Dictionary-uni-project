#include "Word.h"
#include <string>
using namespace std;

string Word::getWord()
{
	return word;
}

string Word::getDef()
{
	return definition;
}


void Word::setWord(string wordVar)
{
	word = wordVar;
}

void Word::setDef(string defVar)
{
	definition = defVar;
}



bool Word::isPalindrome()
{
	int flag = 1;
	for (int i = 0, j = word.length(); i < j; ++i, --j)
	{
		if (word[i] != word[j-1])
		{
			flag = 0;
		}
	}
	if (flag == 1) 
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Word::isNoun()
{

	return false;
}

bool Word::isVerb()
{
	return false;
}