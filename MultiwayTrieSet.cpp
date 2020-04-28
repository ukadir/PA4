#include "Set.h"
#include <iostream>
/**
 * Implement the MultiwayTrieSet constructor
 */
MultiwayTrieSet::MultiwayTrieSet() {
    /* YOUR CODE HERE */
    //cerr << "construcor";
    this->root = new Node();
    numElements = 0;
}

/**
 * Implement the MultiwayTrieSet destructor
 */
MultiwayTrieSet::~MultiwayTrieSet() {
    /* YOUR CODE HERE */
}

/**
 * Implement the MultiwayTrieSet methods correctly
 */
unsigned int MultiwayTrieSet::size() {
    /* YOUR CODE HERE */
    return numElements;
}

void MultiwayTrieSet::insert(string s) {
    /* YOUR CODE HERE */
    //cerr << "insertv :" << s;
    Node* curr = root;
    //cerr << "curr :" << curr;

    for(unsigned int i = 0; i < s.length(); i++) {

        char letter = s[i];
        //cout << "Gets here " << letter;
        
        if(curr->children[letter] == NULL) {
            curr->children[letter] = new Node();
        }
        curr = curr->children[letter];
        //cout << "letter=" << letter << "curr =" << curr;
    }
    if(curr->isWord)
        return;

    curr->isWord = true;
    numElements++;
    //cout << "numelements =" << numElements;
}

void MultiwayTrieSet::remove(const string & s) {
    /* YOUR CODE HERE */
    //cerr << "remove";
    Node* curr = root;
    for(unsigned int i = 0; i < s.length(); i++) {
        char letter = s[i];
        if(curr->children.find(letter) == curr->children.end()) {
            return;
        }
        curr = curr->children[letter];
    }
    if(!(curr->isWord))
        return;

    curr->isWord = false;
    numElements--;
}

bool MultiwayTrieSet::find(const string & s) {
    /* YOUR CODE HERE */
    /*cout<< "---------";*/
    Node* curr = root;
    /*if(curr == NULL) {
        cout << "NULL";
        return false;
    }*/
        

    for(unsigned int i = 0; i < s.length(); i++) {
        char letter = s[i];
        if(curr->children.find(letter) == curr->children.end()) {
            return false;
        }
        curr = curr->children[letter];
    }
    
    if(curr->isWord)
        return true;

    return false;
}
