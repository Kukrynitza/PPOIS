#pragma once
#include "ReadInformationFromFile.h"
#include "Markov.h"
using namespace std;

class Menu {
private:
	Recording recordFileInformation;
	list<pair<string, string>> changes;
	Markov marcovAlgorithm;
public:
	string getChanges(string rec);
	list<pair<string, string>> setChanges();
	void consoleLogChanges();
	void consoleLogText();
	void newChange(string whatNeedsToBeChanged, string isWhatNeedsToBeReplaced);
	void deleteChange(string changWhatNeedsDelete);
	void addChangeInFile();
	bool menuChoise(string choise);
};