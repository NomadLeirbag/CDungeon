#include "process.hpp"

#include <sys/stat.h>
#include <unistd.h>
#include <iostream>
#include <fstream>

#include "node.hpp"

using namespace std;

void process(Node* current) {
	string* phrases = current->getPhrases();
	for(int i = 0; i < current->getNumPhrases(); i++) {
		mkdir(phrases[i].c_str(), 0700);
		chdir(phrases[i].c_str());
	}
	if(current->getNumChildren() > 0) {
		Node* children = current->getChildren();
		for(int i = 0; i < current->getNumChildren(); i++) {
			process(&(children[i]));
		}
	}
	else {
		ofstream end("The End.");
	  end << "This is not the easter egg you are looking for..." << endl;
	}
	for(int i = 0; i < current->getNumPhrases(); i++) {
		chdir("..");
	}
}