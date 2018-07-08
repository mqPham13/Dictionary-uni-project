//Word class, contains 'word' and 'definiton' variables
//along with setters and getters methods for those variables

#ifndef WORD_H
#define WORD_H
#include <string>
using namespace std;

class Word
{
protected:
	string word;
	string definition;

public:
	string virtual getWord();
	string virtual getDef(); //get definition
	string getType();
	void setWord(string wordVar);
	void setDef(string defVar);
	void setType(string typeVar);
	bool isPalindrome();
	bool virtual isNoun();
	bool virtual isVerb();
};
#endif 

