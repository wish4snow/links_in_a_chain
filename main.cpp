#include <iostream>
#include "node.hpp"
using namespace std;

int main () {

	ChainLink red = ChainLink("red");
	ChainLink white = ChainLink("white");
	ChainLink blue = ChainLink("blue");
	
	
	Node one = Node(&red);
	Node two = Node(&white, &one);
	Node three = Node(&blue, &two);

	cout << &one << endl;
	Node next_node = one.next();
	cout << next_node.give_data().get_color() << endl;


	return 0;
}
