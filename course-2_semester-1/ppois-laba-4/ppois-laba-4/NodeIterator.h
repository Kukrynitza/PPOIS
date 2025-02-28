#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <memory>
#include <sstream>
#include <iterator>
#include <utility>
#include "Node.h"
using namespace std;
class NodeIterator : public  iterator< bidirectional_iterator_tag, Node> {
    typename  vector< unique_ptr<Node>>::iterator it;

public:
    NodeIterator(typename  vector< unique_ptr<Node>>::iterator it) : it(it) {}

    Node& operator*() { return **it; }
    Node* operator->() { return it->get(); }

    NodeIterator& operator++() { ++it; return *this; }
    NodeIterator operator++(int) { NodeIterator tmp = *this; ++it; return tmp; }

    NodeIterator& operator--() { --it; return *this; }
    NodeIterator operator--(int) { NodeIterator tmp = *this; --it; return tmp; }

    bool operator==(NodeIterator& other) { return it == other.it; }
    bool operator!=(NodeIterator& other) { return it != other.it; }
};
