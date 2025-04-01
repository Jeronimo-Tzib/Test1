#ifndef BINARY_H
#define BINARY_H

#include "node.h"
#include <iostream>

class Binary{

public:

    Node * root;

    Binary();
    ~Binary();

    void insert(int value);
    void inOrder();

private:

    Node* insertRec(Node* node, int value);
    void inOrderRec(Node* node);
    void destroyTree(Node* node);





};

#endif // BINARY_H