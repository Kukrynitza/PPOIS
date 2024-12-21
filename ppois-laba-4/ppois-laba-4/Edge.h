#pragma once
class Edge
{
public:
    int to;
    Edge* next;

    Edge(int to, Edge* next = nullptr) : to(to), next(next) {}
};

