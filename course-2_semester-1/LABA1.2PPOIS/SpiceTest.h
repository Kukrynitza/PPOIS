#pragma once
#include <gtest/gtest.h>
#include "Spice.h"
TEST(SpiceTest, SetAndGetName) {
    Spice spice("������", "������", 50.0);
    EXPECT_EQ(spice.getName(), "������");
}

TEST(SpiceTest, SetAndGetOrigin) {
    Spice spice("��������");
    spice.setOrigin("�����");
    EXPECT_EQ(spice.getOrigin(), "�����");
}

TEST(SpiceTest, SetAndGetWeight) {
    Spice spice("��������", "���-�����", 30.0);
    spice.setWeight(40.0);
    EXPECT_EQ(spice.getWeight(), 40.0);
}

TEST(SpiceTest, DisplayInfo) {
    Spice spice("�������", "������", 25.0);
    testing::internal::CaptureStdout();
    spice.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("������: �������") != std::string::npos);
    EXPECT_TRUE(output.find("�������������: ������") != std::string::npos);
    EXPECT_TRUE(output.find("���: 25 �") != std::string::npos);
}