// Jeronimo Tzib
// Filename: main.cpp

#include <iostream>
#include "binary.h"

using namespace std;

int main(){

    Binary tree; //we create a binary search tree object


    // we use the insert function to insert values into the tree
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    //here we utilize in-order traversal (ascending order)
    cout << "In order traversal: ";
    tree.inorder();


    // pre-order traversal

    cout << "Preorder traversal: ";
    tree.preorder();

    //post-order traversal
    cout << "Postorder traversal: ";
    tree.postorder();

    //level-order traversal
    cout << "Level order traversal: ";
    tree.levelOrder();

    // here we count the number of nodes in the tree
    cout << "Total number of nodes: " << tree.countNodes() << endl;

    // find the height of the tree
    cout << "Height of tree: " << tree.height() << endl;

    // search for a value in the tree

    int Val = 40;
    if(tree.searchTree(Val)){
        cout << "Found " << Val << " in the tree" << endl;   
    } else { 
        cout << "Did not find " << Val << " in the tree" << endl;
    }

    // let's try to search for a value that's not in the tree

    int Val2 = 90;
    if(tree.searchTree(Val2)){
        cout << "Found " << Val2 << " in the tree" << endl;   
    } else { 
        cout << "Did not find " << Val2 << " in the tree" << endl;
    }

    //here we delete a node and print the tree again after deletion
    cout << "Deleting node with value 100(non-existent)" << endl;
    tree.deleteNode(100);
    cout << "In order traversal after deletion attempt: ";
    tree.inorder();

    return 0;
}