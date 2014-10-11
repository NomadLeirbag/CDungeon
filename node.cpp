#include "node.hpp"

#include <string>

using namespace std;

Node::Node(string _name) {
	name = _name;
	hasChildren = false;
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