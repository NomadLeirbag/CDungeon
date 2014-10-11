#include "process.hpp"

#include <sys/stat.h>
#include <unistd.h>
#include <iostream>
#include <fstream>

#include "node.hpp"

using namespace std;

void process(Node* current) {
	mkdir(current->getName().c_str(), 0700);
	chdir(current->getName().c_str());
	if(current->containsChildren()) {
		Node* children = current->getChildren();
		for(int i = 0; i < current->getNumChildren(); i++) {
			process(&(children[i]));
		}
	}
	else {
		ofstream end("The End.");
	  end << "This is not the easter egg you are looking for..." << endl;
	}
	chdir("..");
}