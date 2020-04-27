#include "Set.h"

/**
 * Implement the HashTableSet methods correctly
 */
unsigned int HashTableSet::size() {
    /* YOUR CODE HERE */
    return ht.size();
}

void HashTableSet::insert(string s) {
    /* YOUR CODE HERE */
    ht.insert(s);
}

void HashTableSet::remove(const string & s) {
    /* YOUR CODE HERE */
    ht.erase(s);
}

bool HashTableSet::find(const string & s) {
    /* YOUR CODE HERE */
    unordered_set<string>::iterator it = ht.find(s);

    if(it != ht.end())
        return true;
    
    return false;
}
