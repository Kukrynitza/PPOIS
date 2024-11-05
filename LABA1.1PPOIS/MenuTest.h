#pragma once
#include "Menu.h"
TEST(MenuTest, AddAndDeleteChanges) {
    Menu menu;
    menu.getChanges("C:\\Users\\37533\\Desktop\\projects\\course-2_semester-1\\PPOIS\\laba1\\PPOIS-laba-1.txt");
    EXPECT_EQ(menu.setChanges().size(), 7);
    menu.newChange("sa", "de");
    EXPECT_EQ(menu.setChanges().size(), 8);

    menu.deleteChange("sa");
    EXPECT_EQ(menu.setChanges().size(), 7);
}

TEST(MenuTest, MunuChoise) {
    Menu menu;
    EXPECT_TRUE(menu.menuChoise("test"));
    EXPECT_FALSE(menu.menuChoise("abc"));
}

TEST(MenuTest, ConsoleOutputTest) {
    Menu menu;
    menu.getChanges("C:\\Users\\37533\\Desktop\\projects\\course-2_semester-1\\PPOIS\\laba1\\PPOIS-laba-1.txt");
    testing::internal::CaptureStdout();
    menu.consoleLogText();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "This is the first paragraph of text.\nThis is the second paragraph of text, which continues over several lines.\n\n");
}

TEST(MenuTest, ConsoleOutputChanges) {
    Menu menu;
    menu.getChanges("C:\\Users\\37533\\Desktop\\projects\\course-2_semester-1\\PPOIS\\laba1\\PPOIS-laba-1.txt");
    testing::internal::CaptureStdout();
    menu.consoleLogChanges();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "dfg >> f\nis >> at\nat >> v\nov >> e\ncss >> as\nas >> at\nat >> the\n\n");
}