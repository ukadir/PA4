#include "Set.h"

/**
 * Implement the RedBlackTreeSet methods correctly
 */
unsigned int RedBlackTreeSet::size() {
    /* YOUR CODE HERE */
    return rbt.size();
}

void RedBlackTreeSet::insert(string s) {
    /* YOUR CODE HERE */
    rbt.insert(s);
}

void RedBlackTreeSet::remove(const string & s) {
    /* YOUR CODE HERE */
    rbt.erase(s);
}

bool RedBlackTreeSet::find(const string & s) {
    /* YOUR CODE HERE */
    set<string>::iterator it = rbt.find(s);

    if(it != rbt.end())
        return true;
    
    return false;
}
