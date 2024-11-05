#include <gtest/gtest.h>
#include "testMenu.h"
#include "testMarkov.h"
#include "testReadInformationFromFile.h"

int main(int argc, char** argv) {
    system("chcp 1251");
    setlocale(LC_ALL, "RU");
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}