//CSP2104 Object-Oriented Programming with C++
//Assignment Part 1
//Student: Minh Quang Pham 
//ID: 10376093
//Lecturer: Dr Martin Masek
//Campus: Joondalup


#include <iostream>
#include <string>
#include "getInput.h"  //please find the function for getting user's input here
#include "Word.h"     //please find the Word class here
#include "Noun.h"
#include "Dictionary.h"  //please find the Dictionary class here
using namespace std;


int main()
{
	string menuSelect;
	bool exit = false;
	Dictionary mainDict("dictionary.txt");

	cout << "  -------  " << endl;
	cout << "| Welcome! |" << endl;
	cout << "  -------  " << endl;

	mainDict.loadDictionary();
	mainDict.getTotalNumberOfWords();

	while (exit == false)
	{
		menuSelect = getInput("\n\nMENU\n"
							  "1) Get definition for a word\n"
							  "2) Find the word(s) that has more than 3 'z''s\n"
						      "3) Return words that have 'q' but not followed by 'u'\n"
							  "4) Return words that are Palindromes\n"
							  "Press 'q' to quit\n");
		if (menuSelect == "1")
		{
			mainDict.findWord();
		}
		if (menuSelect == "2")
		{
			cout << "Word(s) with more than three 'z''s: " << endl;
			mainDict.threeZsWords();
		}
		if (menuSelect == "3")
		{
			cout << "Words that contain 'q' but not followed by 'u': " << endl;
			mainDict.qNotFollowByU();
		}
		if (menuSelect == "q")
		{
			cout << "Goodbye.\n";
			exit = true;
		}
		if (menuSelect == "4")
		{
			cout << "Words that are Palindromes:" << endl;
			mainDict.returnPalindrome();
		}
		if (!(menuSelect == "1" || menuSelect == "2" || menuSelect == "3" || menuSelect == "4" || menuSelect == "q"))
		{
			cout << "Invalid input" << endl;
		}
	}
	system("pause");
	return 0;
}

