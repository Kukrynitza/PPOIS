#pragma once
#include "Edge.h"
class Node
{
public:
        int value;
        Edge* head;

        Node(int value) : value(value), head(nullptr) {}
};

