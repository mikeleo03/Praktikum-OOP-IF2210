#include "BinaryTree.hpp"

int main() {
    BinaryTree<int> tree1;
    tree1.setValue(1);
    BinaryTree<int> tree2 = tree1.addChild(2);
    cout << tree1;
    cout << tree2;
    return 0;
}