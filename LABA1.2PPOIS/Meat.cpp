#include "Meat.h"
void Meat::setState(string state){
	this->state.push_back("� ����� " + state);
}

int Meat::getWeight() {
	return weight;
}