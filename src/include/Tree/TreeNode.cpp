#include "TreeNode.h"

TreeNode::TreeNode(StoryNode *data) {
    this->data = data;
}

void TreeNode::setLeftChild(TreeNode *leftChild) {
    this->leftChild = leftChild;
}

void TreeNode::setRightChild(TreeNode *rightChild) {
    this->rightChild = rightChild;
}