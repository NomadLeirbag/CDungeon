#ifndef NODE_H
#define NODE_H

#include <string>

using namespace std;

class Node {
	public:
		Node(string _name);
		Node(string _name, Node* _child);
		Node(string _name, int _numChildren, Node* _children);
		bool containsChildren();
		string getName();
		int getNumChildren();
		Node* getChildren();
	private:
		int numChildren;
		Node* children;
		string name;
		bool hasChildren;
};

#endif