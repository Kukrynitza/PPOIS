#pragma once
#include <gtest/gtest.h>
#include "Spice.h"
TEST(SpiceTest, GetName) {
    Spice spice("������");
    EXPECT_EQ(spice.getName(), "������");
}