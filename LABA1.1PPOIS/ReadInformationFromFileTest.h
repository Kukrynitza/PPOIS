#pragma once
#include "ReadInformationFromFile.h"
TEST(RecordingTest, FileRecordingFailure) {
    Recording rec;
    rec.getRecord("C:\\Users\\37533\\Desktop\\project\\course-2_semester-1\\PPOIS\\LABA1.1PPOIS\\PPOIS-laba-1.txt");
    EXPECT_FALSE(rec.recordingInformationFromFile());
}

TEST(RecordingTest, FileGetText) {
    Recording rec;
    rec.getText("asdx");
    EXPECT_EQ(rec.setText(), "asdx");
}

TEST(RecordingTest, FileGetChanges) {
    Recording rec;
    list<pair<string, string>> changes = { {"I", "Google"}, {"v", "g"}, {"og", "g"} };
    rec.getChanges(changes);
    EXPECT_FALSE(rec.recordingInformationFromFile());
}

TEST(RecordingTest, FileRecordingSuccess) {
    Recording rec;
    rec.getRecord("C:\\Users\\37533\\Desktop\\projects\\course-2_semester-1\\PPOIS\\LABA1.1PPOIS\\PPOIS-laba-1.txt");
    EXPECT_TRUE(rec.recordingInformationFromFile());
    EXPECT_EQ(rec.setText(), "This is the first paragraph of text.\nThis is the second paragraph of text, which continues over several lines.");
    EXPECT_EQ(rec.setChanges().size(), 7);
}