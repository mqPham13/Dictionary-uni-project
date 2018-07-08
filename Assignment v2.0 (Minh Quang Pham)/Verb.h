#ifndef VERB_H
#define VERB_H

#include <iostream>
#include <string>
#include "Word.h"
using namespace std;

class Verb : public Word
{

public:
	string getDef();
};


#endif 

