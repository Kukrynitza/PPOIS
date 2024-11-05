#include <gtest/gtest.h>
#include "Markov.h"

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
