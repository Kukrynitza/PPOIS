#include "Clean.h"
string Clean::getState(){
	return  to_string(ingridient.second) + ' ' + ingridient.first + " �. ���� �������(�) " + name + "��";
}