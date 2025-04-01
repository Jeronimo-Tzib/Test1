//filename: binary.cpp

#include "binary.h"
#include <queue>


// constructor

Binary::Binary() : root(nullptr){}

//declare helper function for insert for recursion

Binary::Node* Binary :: insert(Node* node, int value){
    if (node == nullptr){
        return new Node(value);
} if (value < node->data){
    node->left = insert(node->left, value);
} else if (value > node->data){
    node->right = insert(node->right, value);
}

return node;
}

/*declare wrapper function so user can call insert without
needing to pass the root explicitly*/

void Binary::insert(int value){
    root = insert(root, value);
}

bool Binary::searchTree(Node* node, int value) {
    if (node == nullptr) {
        return false;  // value not found
    }
    if (node->data == value) {
        return true;  // value found
    }
    return (value < node->data) ? searchTree(node->left, value) : searchTree(node->right, value);
}

bool Binary::searchTree(int value) {
    return searchTree(root, value);  // returns true if found, false otherwise
}


Binary::Node* Binary::findMin(Node* node){
    if(node == nullptr){
        return nullptr;
    } while (node->left != nullptr){
        node = node->left;
    }
    return node;
}

Binary::Node* Binary::deleteNode(Node* node, int value){
    if(node == nullptr){
        return node;
    } if (value < node->data){
        node->left = deleteNode(node->left, value);
    } else if (value > node->data){
        node->right = deleteNode(node->right, value);
    } else {
        if (node->left == nullptr){
            Node* temp = node->right;
            delete node;
            return temp;
        } else if (node->right == nullptr){
            Node* temp = node->left;
            delete node;
            return temp;
        }
    }

    return node;
    
}

void Binary::deleteNode(int value){
    root = deleteNode(root, value);
}

void Binary:: inorder(Node* node){
    if(root == nullptr){
        return;
    }

    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

void Binary::inorder(){
    inorder(root);
    cout << endl;
}

void Binary::preorder(Node* node){
    if(root == nullptr){
        return;
    }

    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void Binary::preorder(){
    preorder(root);
    cout << endl;
}

void Binary::postorder(Node* node){
    if(root == nullptr){
        return;
    }

    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}

void Binary::postorder(){
    postorder(root);
    cout << endl;
}

void Binary::levelOrder(Node* node){
    if (root == nullptr){
        return;
    }

    queue<Node*> q;
    q.push(node);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }

}





