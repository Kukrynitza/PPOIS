#include "Menu.h";

string Menu::getChanges(string rec) {
	recordFileInformation.getRecord(rec);
	if (recordFileInformation.recordingInformationFromFile())
		changes = recordFileInformation.setChanges();
	else
	{
		return "5";
	}
	return "1";
}

list<pair<string, string>> Menu::setChanges() {
	return changes;
}

void Menu::consoleLogChanges() {
	for (auto& change : changes)
	{
		cout << change.first << " >> " << change.second << endl;
	}
	cout << endl;
}
void Menu::consoleLogText() {
	cout << recordFileInformation.setText() << endl << endl;
}
void Menu::newChange(string whatNeedsToBeChanged, string isWhatNeedsToBeReplaced) {
		if (whatNeedsToBeChanged.empty()){
			cout << "������� ����� ��������, ������� �������: ";
		getline(cin, whatNeedsToBeChanged);
		cout << endl;
		}
		if (isWhatNeedsToBeReplaced.empty()) {
			cout << "������� ������, �� ������� �������: ";
			getline(cin, isWhatNeedsToBeReplaced);
			cout << endl;
		}
	changes.push_back(make_pair(whatNeedsToBeChanged, isWhatNeedsToBeReplaced));
	addChangeInFile();
}

void Menu::deleteChange(string changWhatNeedsDelete) {
		if (changWhatNeedsDelete.empty()){
			consoleLogChanges();
		cout << "������� ����� ��������, ������� �������, ��� ��� ��������: ";
		getline(cin, changWhatNeedsDelete);
		}
	changes.remove_if([&changWhatNeedsDelete](const pair<string, string>& pairs) {
		return pairs.first == changWhatNeedsDelete;});
	addChangeInFile();
}
void Menu::addChangeInFile() {
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
bool Menu::menuChoise(string choise) {
	if (choise != "6") {
		choise = getChanges("");
	}
	else {
		choise = "5";
	}
	while (choise != "5") {
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
			newChange("","");
		}
		else if (choise == "4") {
			deleteChange("");
		}
		else if (choise == "log") {
			marcovAlgorithm.getText(recordFileInformation.setText());
			marcovAlgorithm.getChanges(changes);
			marcovAlgorithm.applicationofmarkovalgorithms();
			cout << "��������� ���������?(Yes,No)" << endl;
			getline(cin, choise, '\n');
			if (choise == "Yes")
			{
				recordFileInformation.getText(marcovAlgorithm.setText());
				addChangeInFile();
			}
			choise.clear();
			cout << endl << endl;
		}
		else if (choise == "5") {
			return 0;
		}
		else {
			cout << "������ �����" << endl << endl;
		}
	}
	return 1;
}
