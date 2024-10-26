#include <gtest/gtest.h>
#include "Markov.h"
#include "ReadInformationFromFile.h"
#include "Menu.h"

TEST(MarkovTest, MarkovAlgorithmApplication) {
    Markov markov;
    string initialText = "I love google_test";
    list<pair<string, string>> changes = { {"I", "Google"}, {"v", "g"}, {"og", "g"} };
    markov.getText(initialText);
    markov.getChanges(changes);
    markov.applicationofmarkovalgorithms();
    EXPECT_EQ(markov.setText(), "Gogle lge gogle_test");
}

TEST(MarkovTest, MarkovSetChanges) {
    Markov markov;
    list<pair<string, string>> changes = { {"I", "Google"}, {"v", "g"}, {"og", "g"} };
    markov.getChanges(changes);
    EXPECT_EQ(markov.setChanges(), changes);
}
int main(int argc, char** argv) {
    system("chcp 1251");
    setlocale(LC_ALL, "RU");
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
