#include "Set.h"

/**
 * Implement the ArrayListSet methods correctly
 */
unsigned int ArrayListSet::size() {
    /* YOUR CODE HERE */
    return arr.size();
}

void ArrayListSet::insert(string s) {
    /* YOUR CODE HERE */
    vector<string>::iterator it;

    for(it = arr.begin(); it != arr.end(); it++) {
        if(*it == s) {
            return;
        }
    }
    arr.push_back(s);
}

void ArrayListSet::remove(const string & s) {
    /* YOUR CODE HERE */
    vector<string>::iterator it;

    for(it = arr.begin(); it != arr.end(); it++) {
        if(*it == s) {
            arr.erase(it);
            return;
        }
    }
}

bool ArrayListSet::find(const string & s) {
    /* YOUR CODE HERE */
    vector<string>::iterator it;

    for(it = arr.begin(); it != arr.end(); it++) {
        if(*it == s) {
            return true;
        }
    }

    return false;
}
