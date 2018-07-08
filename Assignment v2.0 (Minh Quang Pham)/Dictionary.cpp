#include "Dictionary.h"
#include "Word.h"
#include "Noun.h"
#include "Verb.h"
#include "Adverb.h"
#include "Adjective.h"
#include "MiscWord.h"
#include "Preposition.h"
#include "ProperNoun.h"
#include "getInput.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

//------------------------------------------------------------------------------------------------------------------------------------------
Dictionary::Dictionary(string fName)
{
	fileName = fName;
}

//------------------------------------------------------------------------------------------------------------------------------------------
void Dictionary::loadDictionary() 
{
	const int DEFINITION_SIZE = 4;
	const int WORD_LINE = 1;
	const int DEF_LINE = 2;
	const int TYPE_LINE = 3;
	int lineCounter;
	string line;
	ifstream myfile(fileName);
	Word oneWord;
	string type;

	cout << "Loading dictionary..." << endl;
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			getline(myfile, line);
			for (lineCounter = 1; lineCounter < DEFINITION_SIZE; ++lineCounter)
			{
				if (lineCounter == WORD_LINE && (line.size() != 0)) // line.size() != 0 check to see if it is a blank line
				{
					oneWord.setWord(line);
				}
				if (lineCounter == DEF_LINE && (line.size() != 0))
				{
					oneWord.setDef(line);
				}
				if (lineCounter == TYPE_LINE && (line.size() != 0))
				{
					type = line;
					if (type == "n")
					{	
						listOfWords.push_back(new Noun(oneWord));
					}
					if (type == "v")
					{
						listOfWords.push_back(new Verb);
					}
					if (type == "adv")
					{
						listOfWords.push_back(new Adverb);
					}
					if (type == "adj")
					{
						listOfWords.push_back(new Adjective);
					}
					if (type == "misc")
					{
						listOfWords.push_back(new MiscWord);
					}
					if (type == "prep")
					{
						listOfWords.push_back(new Preposition);
					}
					if (type == "pn")
					{
						listOfWords.push_back(new ProperNoun(oneWord));
					}
				}
				getline(myfile, line);
			}
		}
		myfile.close();
	}
}

//------------------------------------------------------------------------------------------------------------------------------------------
Dictionary::~Dictionary()
{
	for (int i = 0; i < listOfWords.size(); ++i)
	{
		delete listOfWords[i];
	}
}

//------------------------------------------------------------------------------------------------------------------------------------------
int Dictionary::getTotalNumberOfWords()
{
	cout << "Total number of words is: " << listOfWords.size() << endl;
	return 0;
}


//------------------------------------------------------------------------------------------------------------------------------------------
void Dictionary::findWord()
{
	bool found = false;
	string inputWord;
	inputWord = getInput("Please enter a word: ");
	for (int i = 0; i < listOfWords.size(); ++i)
	{
		if (inputWord == (listOfWords[i]->getWord()))
		{
			cout << "Definition: " << listOfWords[i]->getDef() << endl;
			found = true;
			break;
		}
	}
	if (found == false)
	{
		cout << "There is no such word." << endl;
	}
}


//------------------------------------------------------------------------------------------------------------------------------------------
void Dictionary::threeZsWords()
{
	int zCount;
	const int NUMBER_OF_Z = 3;
	for (int i = 0; i < listOfWords.size(); ++i)
	{
		zCount = 0;
		for (int j = 0; j < listOfWords[i]->getWord().length(); ++j)
		{
			if (listOfWords[i]->getWord()[j] == 'z')
			{
				zCount += 1;
			}
		}
		if (zCount > NUMBER_OF_Z)
		{
			cout << listOfWords[i]->getWord() << endl;
		}
	}
}


//------------------------------------------------------------------------------------------------------------------------------------------
void Dictionary::qNotFollowByU()
{
	for (int i = 0; i < listOfWords.size(); ++i)
	{
		for (int j = 0; j < listOfWords[i]->getWord().length(); ++j)
		{
			if ((listOfWords[i]->getWord()[j] == 'q') && (listOfWords[i]->getWord()[j + 1] != 'u'))
			{
				cout << listOfWords[i]->getWord() << endl;
			}
		}
	}
}


//------------------------------------------------------------------------------------------------------------------------------------------
void Dictionary::returnPalindrome()
{
	for (int i = 0; i <= listOfWords.size(); ++i)
	{
		if (listOfWords[i]->isPalindrome() == true)
		{
			cout << listOfWords[i]->getWord() << endl;
		}
	}
}