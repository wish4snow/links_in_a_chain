#include <iostream>
#include "node.hpp"
using namespace std;

int main () {

	ChainLink red = ChainLink("red");
	ChainLink white = ChainLink("white");

	Node one = new Node(&red);
	Node two =  new Node(&white, &one);
	Node next_node = one.next();

	//cout << next_node.give_data().get_color();


	return 0;
}
