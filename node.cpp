#include "node.hpp"

#include <string>

using namespace std;

Node::Node(string* temp_phrase) {
	phrases = temp_phrase;
	numPhrases = 1;
	children = NULL;
	numChildren = 0;
}
Node::Node(string* temp_phrase, Node* temp_child) {
	phrases = temp_phrase;
	numPhrases = 1;
	children = temp_child;
	numChildren = 1;
}
Node::Node(int temp_numPhrases, string* temp_phrases) {
	phrases = temp_phrases;
	numPhrases = temp_numPhrases;
	children = NULL;
	numChildren = 0;
}
Node::Node(int temp_numPhrases, string* temp_phrases, Node* temp_child) {
	phrases = temp_phrases;
	numPhrases = temp_numPhrases;
	children = temp_child;
	numChildren = 1;
}
Node::Node(int temp_numPhrases, string* temp_phrases, int temp_numChildren, Node* temp_children) {
	phrases = temp_phrases;
	numPhrases = temp_numPhrases;
	children = temp_children;
	numChildren = temp_numChildren;
}

int Node::getNumChildren() {
	return numChildren;
}
Node* Node::getChildren() {
	return children;
}
int Node::getNumPhrases() {
	return numPhrases;
}
string* Node::getPhrases() {
	return phrases;
}