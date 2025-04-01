#include "binary.h"

// constructor

Binary::Binary() : root(nullptr){}

// destructor to free memory

Binary::~Binary(){
    destroyTree(root);
}

// insert functon (calls recursive helper)

void Binary(int value){
    root = insertRec(root, value);
}
