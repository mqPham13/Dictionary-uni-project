//Dictionary class, contains a vector of Word objects, 
//a method for loading content of the text file into that vector,
//a constructor that receives name of a text file, 
//other methods performing required tasks.

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <iostream>
#include <string>
#include <vector>
#include "Word.h"
using namespace std;

class Dictionary
{
	string fileName;
	vector<Word*> listOfWords; //vector containing objects of Word class

public:
	

	Dictionary(string fName); //constructor for Dictionary class

	~Dictionary();

	void loadDictionary(); //method for loading text file into vector of Word objects

	int getTotalNumberOfWords(); //method for getting total number of words in the dictionary

	void findWord(); //method for the first menu item: returning definition of a word

	void threeZsWords(); //method for the second menu item: find word(s) with more than 3 'z''s

	void qNotFollowByU(); //method for the third menu item: list the words that have a 'q' but not followed by a 'u'

	void returnPalindrome(); //method for the fourth menu item: return all words that are Palindromes
};



#endif 
