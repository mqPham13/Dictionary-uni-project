#include "getInput.h"
#include <iostream>
#include <string>
using namespace std;

string getInput(string promptText)
{
	string userInput;
	cout << promptText << endl;
	getline(cin, userInput, '\n');

	// the next part is for transforming user's input into lower case
	//as dictionary.txt contains all lower cased words
	for (int i = 0; i < userInput.length(); i++) 
	{
		userInput[i] = tolower(userInput[i]);
	}

	return userInput;
}