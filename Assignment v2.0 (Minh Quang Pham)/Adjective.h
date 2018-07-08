#ifndef ADJECTIVE_H
#define ADJECTIVE_H

#include <iostream>
#include <string>
#include "Word.h"
using namespace std;

class Adjective : public Word
{

public:
	string getDef();
};


#endif 

