//filename: binary.h

#ifndef BINARY_H
#define BINARY_H

#include <iostream>
using namespace std;

class Binary{

    private:

    //define node structure

    struct Node{

        int data;
        Node* left;
        Node* right;
        Node(int val) : data(val), left(nullptr), right(nullptr){}

    };

    //define functions

    Node* root;

    Node* insert(Node* node, int value);
    bool searchTree(Node* node, int value);
    Node* deleteNode(Node* node, int value);
    Node* findMin(Node* node);
    void inorder(Node* node);
    void preorder(Node* node);
    void postorder(Node* node);
    int countNodes(Node* node);
    int height(Node* node);
    void levelOrder(Node *node);

public:

    Binary();
    void insert(int value);
    bool searchTree(int value);
    void deleteNode(int value);
    void inorder();
    void preorder();
    void postorder();
    void levelOrder();
    int countNodes();
    int height();

};

#endif // BINARY_H