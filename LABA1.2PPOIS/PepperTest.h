#pragma once
#include "Pepper.h"

TEST(PepperTest, SetAndGetSpicinessLevel) {
    Pepper pepper;
    pepper.setSpicinessLevel(5);
    EXPECT_EQ(pepper.getSpicinessLevel(), 5);
}

TEST(PepperTest, SetAndGetColor) {
    Pepper pepper;
    pepper.setColor("�������");
    EXPECT_EQ(pepper.getColor(), "�������");
}

TEST(PepperTest, GetSpice) {
    Pepper pepper("�����", "�������", 40.0, 7, "�������");
    EXPECT_EQ(pepper.getSpice(), "��������� ����� (�������)\n");
}

TEST(PepperTest, DisplayInfo) {
    Pepper pepper("�����", "�������", 40.0, 7, "�������");
    testing::internal::CaptureStdout();
    pepper.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("������: �����") != std::string::npos);
    EXPECT_TRUE(output.find("�������������: �������") != std::string::npos);
    EXPECT_TRUE(output.find("���: 40 �") != std::string::npos);
    EXPECT_TRUE(output.find("����: �������") != std::string::npos);
    EXPECT_TRUE(output.find("������� �������: 7") != std::string::npos);
}