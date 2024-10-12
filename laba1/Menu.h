#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <math.h>
#include <iomanip>
#include <map>
#include <sstream>
#include "ReadInformationFromFile.h"
#include "Markov.h"
#include <unordered_map>

class Menu {
private:
	Recording recordFileInformation;
	unordered_map<string, string> changes;
	Deduce marcovAlgorithm;
public:
	void getChanges() {
		recordFileInformation.getRecord();
		recordFileInformation.recordingInformationFromFile();
		changes = recordFileInformation.setChanges();
	}

	void consoleLogChanges() {
		for (auto& change : changes)
		{
			cout << change.first << " >> " << change.second << endl;
		}
		cout << endl << endl;
	}
	void consoleLogText() {
		cout << recordFileInformation.setText() << endl << endl;
	}
	void newChange(){
		string whatNeedsToBeChanged, isWhatNeedsToBeReplaced;
		cout << "������� ����� ��������, ������� �������: ";
		getline(cin, whatNeedsToBeChanged);
		cout << endl;
		cout << "������� ������, �� ������� �������: ";
		getline(cin, isWhatNeedsToBeReplaced);
		cout << endl;
		changes.insert(make_pair(whatNeedsToBeChanged, isWhatNeedsToBeReplaced));
		addChangeInFile();
	}

	void deleteChange() {
		string changWhatNeedsDelete;
		consoleLogChanges();
		cout << "������� ����� ��������, ������� �������, ��� ��� ��������: ";
		getline(cin, changWhatNeedsDelete);
		changes.erase(changWhatNeedsDelete);
		addChangeInFile();
	}
	void addChangeInFile() {
		ofstream addChange(recordFileInformation.setRecord());
		if (!addChange.is_open()) {
			cout << "����������� ������� ������ �� ���� ��� ������" << endl;
			return;
		}

		addChange << recordFileInformation.setText() << endl << endl;

		for (auto& change : changes) {
			addChange << "CHNG: <" << change.first << "> >> <" << change.second << ">" << endl;
		}

		addChange.close();
	}
	void menuChoise(){
		getChanges();
		string choise = "1";
		while (!choise.empty()) {
			cout << "���������� ����� - 1" << endl;
			cout << "���������� ������� - 2" << endl;
			cout << "�������� ������� - 3" << endl;
			cout << "������� ������� - 4" << endl;
			cout << "�������� ������� - log" << endl;
			cout << "��������� ��������� - 5" << endl;
			cout << "����: ";
			getline(cin, choise, '\n');
			cout << endl << endl;
			if (choise == "1")
			{
				consoleLogText();
			}
			else if (choise == "2") {
				consoleLogChanges();
			}
			else if (choise == "3") {
				newChange();
			}
			else if (choise == "4") {
				deleteChange();
			}
			else if (choise == "log") {
				marcovAlgorithm.getText(recordFileInformation.setText());
				marcovAlgorithm.getChanges(changes);
				marcovAlgorithm.applicationofmarkovalgorithms();
			}
			else if (choise == "5") {
				choise.clear();
			}
			else {
				cout << "������ �����" << endl;
			}
		}
	}

};