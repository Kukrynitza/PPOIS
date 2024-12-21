#pragma once
#include "Edge.h"
#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <memory>
#include <sstream>
#include <iterator>
#include <utility>
class IncidentEdgeIterator : public  iterator< bidirectional_iterator_tag, Edge> {
    Edge* edge;

public:
    IncidentEdgeIterator(Edge* edge) : edge(edge) {}

    Edge& operator*() { return *edge; }
    Edge* operator->() { return edge; }

    IncidentEdgeIterator& operator++() { edge = edge->next; return *this; }
    IncidentEdgeIterator operator++(int) { IncidentEdgeIterator tmp = *this; edge = edge->next; return tmp; }

    bool operator==(IncidentEdgeIterator& other) { return edge == other.edge; }
    bool operator!=(IncidentEdgeIterator& other) { return edge != other.edge; }
};

