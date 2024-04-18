#include <iostream>
#include "node.hpp"
using namespace std;

int main () {

	ChainLink red = ChainLink("red");
	ChainLink white = ChainLink("white");

	Node one = Node(&red);
	Node two = Node(&white, &red);
	Node next_node = one.next();

	cout << next_node.give_data().get_color();


	return 0;
}
