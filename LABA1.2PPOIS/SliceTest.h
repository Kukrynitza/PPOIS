#pragma once
#include "Slice.h"

TEST(SliceTest, SetAndGetState) {
    Slice sliceAction;
    sliceAction.setIngridients("�������", 150);
    sliceAction.setName("���");
    string expectedState = "150 ������� �. ���(�) �������� �����";
    EXPECT_EQ(sliceAction.getState(), expectedState);
}