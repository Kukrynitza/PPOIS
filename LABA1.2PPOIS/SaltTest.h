#pragma once
#include "Salt.h"

TEST(SaltTest, GetName) {
    Salt salt;
    EXPECT_EQ(salt.getName(), "����");
}

TEST(SaltTest, GetSpice) {
    Salt salt;
    EXPECT_EQ(salt.getSpice(), "��������� ����\n");
}
