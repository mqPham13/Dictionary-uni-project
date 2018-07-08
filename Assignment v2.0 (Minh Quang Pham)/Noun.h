#ifndef NOUN_H
#define NOUN_H

#include <iostream>
#include <string>
#include "Word.h"
using namespace std;

class Noun : public Word
{

public:
	Noun(Word);
	string getDef();
};


#endif 
