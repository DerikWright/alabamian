#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

void say(string sayThis)
{
	cout << sayThis << endl;
}

std::string hear(std::string PromptUser)
{
	string userInput = "";
	cout << PromptUser << endl;
	cin >> userInput;
	return userInput;
}