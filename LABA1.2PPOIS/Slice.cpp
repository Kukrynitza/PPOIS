#include "Slice.h"
string Slice::getState(){
	return to_string(ingridient.second) + ' ' + ingridient.first + " �. ���(�) �������� " + name + "��";
}