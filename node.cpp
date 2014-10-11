#include "node.hpp"

#include <string>

using namespace std;

Node::Node(string _name) {
	name = _name;
	numChildren = 0;
	children = NULL;
	hasChildren = false;
}
Node::Node(string _name, Node* _child) {
	name = _name;
	numChildren = 1;
	children = _child;
	hasChildren = true;
}
Node::Node(string _name, int _numChildren, Node* _children) {
	name = _name;
	numChildren = _numChildren;
	children = _children;
	hasChildren = true;
}
bool Node::containsChildren() {
	return hasChildren;
}
string Node::getName() {
	return name;
}
int Node::getNumChildren() {
	return numChildren;
}
Node* Node::getChildren() {
	return children;
}