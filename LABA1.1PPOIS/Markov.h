#pragma once
#include "ReadInformationFromFile.h"


class Markov {
private:
    string text;
    list<pair<string, string>> changes;
public:
    void getText(string text);
    void getChanges(list<pair<string, string>> changes);
    string setText();
    list<pair<string, string>> setChanges();
    void applicationofmarkovalgorithms();

};

//C:\Users\37533\Desktop\course-2_semester-1\PPOIS\laba1\PPOIS-laba-1.txt
//OpenCppCoverage --sources LABA1.1PPOIS -- .\x64\Debug\LABA1.1PPOIS.exe