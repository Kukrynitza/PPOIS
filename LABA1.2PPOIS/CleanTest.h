#pragma once
#include "Clean.h"
TEST(CleanTest, SetAndGetState) {
    Clean cleanAction;
    cleanAction.setIngridients("���������", 200);
    cleanAction.setName("���");

    string expectedState = "200 ��������� �. ���� �������(�) �����";
    EXPECT_EQ(cleanAction.getState(), expectedState);
}