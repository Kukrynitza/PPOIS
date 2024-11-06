#pragma once
TEST(MeatTest, GetName) {
    Meat meat("��������", 500);
    EXPECT_EQ(meat.getName(), "��������");
}

TEST(MeatTest, GetWeight) {
    Meat meat("��������", 500);
    EXPECT_EQ(meat.getWeight(), 500);
}

TEST(MeatTest, SetAndGetState) {
    Meat meat("��������", 500);
    meat.setState("500 �����");

    auto states = meat.getState();
    ASSERT_EQ(states.size(), 1);
    EXPECT_EQ(states[0], "� ����� 500 �����");
}
