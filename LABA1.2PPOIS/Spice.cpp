#include "Spice.h"
string Spice::getName(){
    return name;
}

void Spice::setOrigin(const string& origin) {
    this->origin = origin;
}

string Spice::getOrigin(){
    return origin;
}

void Spice::setWeight(double weight) {
    this->weight = weight;
}

double Spice::getWeight(){
    return weight;
}

void Spice::displayInfo(){
    cout << "������: " << name << endl;
    cout << "�������������: " << origin << endl;
    cout << "���: " << weight << " �" << endl;
}