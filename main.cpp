#include <iostream>
#include "node.hpp"
using namespace std;

int main () {

	ChainLink red = ChainLink("red");
	ChainLink white = ChainLink("white");
	ChainLink blue = ChainLink("blue");
	ChainLink green = ChainLink("green");
	ChainLink black = ChainLink("black");
	
	Node one = Node(&red);
	Node two = Node(&white, &one);
	Node three = Node(&blue, &two);
	Node four = Node(&green, &three);
	Node five = Node(&black, &four);

	cout << one.give_data().get_color() << endl;
	cout << one.next().give_data().get_color() << endl;
	cout << one.next().next().give_data().get_color() << endl;
	cout << one.next().next().next().give_data().get_color() << endl;
	cout << one.next().next().next().next().give_data().get_color() << endl;
	return 0;
}
