#pragma once
#include "Pepper.h"

TEST(PepperTest, GetName) {
    Pepper pepper;
    EXPECT_EQ(pepper.getName(), "�����");
}

TEST(PepperTest, GetSpice) {
    Pepper pepper;
    EXPECT_EQ(pepper.getSpice(), "��������� �����\n");
}