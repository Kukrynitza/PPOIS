#pragma once
#include "Dishes.h"
TEST(DishesTest, SetAndGetName) {
    Dishes dish;
    dish.setName("���");


    EXPECT_EQ(dish.getName(), "���");
}