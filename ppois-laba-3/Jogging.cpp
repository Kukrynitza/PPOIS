#include "Jogging.h"
int Jogging::getHealth()
{
	return health + 1;
}
int Jogging::getWeight()
{
	printJogging();
	return weight - 1;
}
void Jogging::printJogging() {
	cout << "���������� ���������" << endl << endl;
}