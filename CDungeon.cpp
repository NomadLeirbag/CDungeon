#include <iostream>
#include <string>
#include <sys/stat.h>
#include <unistd.h>

#include "node.hpp"
#include "process.hpp"

using namespace std;

int main() {
	mkdir("Dungeon", 0700);
	chdir("Dungeon");
	Node n8("you are toast");
	Node n7("suddenly, out of nowhere comes a dragon!", 1, &n8);
	Node n6("you live happily ever after");
	Node n5("stay", 1, &n7);
	Node n4("leave", 1, &n6);
	Node o1[] = {n4, n5};
	Node n3("would you like to leave?", 2, o1);
	Node n2("its really quite unpleasent", 1, &n3);
	Node n1("you are in a dark and dank cave", 1, &n2);
	process(&n1);
}