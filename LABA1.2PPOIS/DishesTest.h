#pragma once
#include "Dishes.h"
TEST(DishesTest, SetAndGetName) {
    Dishes dish;
    dish.setName("���");
    EXPECT_EQ(dish.getName(), "���");
}

TEST(DishesTest, SetAndGetMaterial) {
    Dishes dish;
    dish.setMaterial("����������� �����");
    EXPECT_EQ(dish.getMaterial(), "����������� �����");
}

TEST(DishesTest, SetAndGetCapacity) {
    Dishes dish;
    dish.setCapacity(2.5);
    EXPECT_DOUBLE_EQ(dish.getCapacity(), 2.5);
}

TEST(DishesTest, SetAndGetWeight) {
    Dishes dish;
    dish.setWeight(1.2);
    EXPECT_DOUBLE_EQ(dish.getWeight(), 1.2);
}

TEST(DishesTest, IsSuitableForInduction) {
    Dishes dish;
    dish.setMaterial("�����");
    EXPECT_TRUE(dish.isSuitableForInduction());

    dish.setMaterial("��������");
    EXPECT_FALSE(dish.isSuitableForInduction());
}

TEST(DishesTest, HeatUp) {
    Dishes dish;
    dish.setName("���������");

    testing::internal::CaptureStdout();
    dish.heatUp();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "��������� ���������...\n");
}