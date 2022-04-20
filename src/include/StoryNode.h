#ifndef STORYNODE_H
#define STORYNODE_H

#include <string>
#include <vector>

using namespace std;


/**
 * The story node has the string
 * for the setup of this particular
 * piece of the story, as well as each
 * choice that can be made (as a vector)
 * 
 */

class StoryNode {

    public:
    string body;
    vector<string> chocies;

    StoryNode(string body, vector<string> choices);

};


#endif