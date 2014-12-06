#ifndef NODE_H
#define NODE_H

#include <string>

using namespace std;

class Node {
	public:
		Node(string* temp_phrase);
		Node(string* temp_phrase, Node* temp_child);
		Node(int temp_numPhrases, string* temp_phrases);
		Node(int temp_numPhrases, string* temp_phrases, Node* temp_child);
		Node(int temp_numPhrases, string* temp_phrases, int temp_numChildren, Node* temp_children);
		int getNumChildren();
		Node* getChildren();
		int getNumPhrases();
		string* getPhrases();
	private:
		int numPhrases;
		string* phrases;
		int numChildren;
		Node* children;
};

#endif