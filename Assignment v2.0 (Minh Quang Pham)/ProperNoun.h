#ifndef PROPERNOUN_H
#define PROPERNOUN_H

#include <iostream>
#include <string>
#include "Noun.h"
using namespace std;

class ProperNoun : public Noun
{

public:
	ProperNoun(Word);
	string getDef();
	string getWord();
};


#endif 
#pragma once
