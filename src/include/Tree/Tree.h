#ifndef TREE_H
#define TREE_H

#include "TreeNode.h"

/**
 * The Tree method for doing a cyoa involves
 * story objects as the nodes for the tree,
 * with each node having two children for the
 * two choices that can be made.
 * 
 */
class Tree {

    public:
    TreeNode *header;
    TreeNode *currentPlace;

    void addNode(TreeNode *node);
    void recurLeft();
    void recurRight();
    void resetCurPlace();
 

};


#endif