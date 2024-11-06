#pragma once
#include "Kitchen.h"
TEST(KitchenTest, AddStepsAndCook) {
    Kitchen kitchen;
    Vegetable carrot("�������", 2);
    Meat chicken("������", 300);

    kitchen.addStep(carrot, "clean");
    kitchen.addStep(carrot, "slice");
    kitchen.addStep(chicken, "slice");

    kitchen.setSpice("pepper");
    kitchen.setSpice("salt");
    kitchen.setDishes("��������");

    kitchen.cook();

    auto carrotStates = carrot.getState();
    auto chickenStates = chicken.getState();

    ASSERT_EQ(carrotStates.size(), 2);
    EXPECT_EQ(carrotStates[0], "� ���������� 2 ������� �. ���� �������(�) �����");
    EXPECT_EQ(carrotStates[1], "� ���������� 2 ������� �. ���(�) �������� �����");

    ASSERT_EQ(chickenStates.size(), 1);
    EXPECT_EQ(chickenStates[0], "� ����� 300 ������ �. ���(�) �������� �����");
}