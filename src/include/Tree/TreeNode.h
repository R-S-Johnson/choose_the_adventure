#ifndef TREENODE_H
#define TREENODE_H

#include "include/StoryNode.h"


class TreeNode {

    public:
    StoryNode *data;

    TreeNode *leftChild;
    TreeNode *rightChild;

    TreeNode(StoryNode *data);

    void setLeftChild(TreeNode *leftChild);
    void setRightChild(TreeNode *rightChild);


};


#endif