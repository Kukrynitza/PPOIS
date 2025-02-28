#pragma once
#include "Salt.h"

TEST(SaltTest, SetAndGetSaltinessLevel) {
    Salt salt;
    salt.setSaltinessLevel(8);
    EXPECT_EQ(salt.getSaltinessLevel(), 8);
}

TEST(SaltTest, SetAndGetSaltType) {
    Salt salt;
    salt.setSaltType("�������");
    EXPECT_EQ(salt.getSaltType(), "�������");
}

TEST(SaltTest, GetSpice) {
    Salt salt("����", "������", 100.0, 5, "�������");
    EXPECT_EQ(salt.getSpice(), "��������� ���� (�������)\n");
}

TEST(SaltTest, DisplayInfo) {
    Salt salt("����", "������", 100.0, 5, "�������");
    testing::internal::CaptureStdout();
    salt.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("������: ����") != std::string::npos);
    EXPECT_TRUE(output.find("�������������: ������") != std::string::npos);
    EXPECT_TRUE(output.find("���: 100 �") != std::string::npos);
    EXPECT_TRUE(output.find("��� ����: �������") != std::string::npos);
    EXPECT_TRUE(output.find("������� ���������: 5") != std::string::npos);
}
