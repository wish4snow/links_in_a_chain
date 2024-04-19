#include <iostream>
#include "node.hpp"

using namespace std;

Node::Node(ChainLink *data) {
	this->data = data;
	this->next_address = NULL;
}

Node::Node(ChainLink *data, Node *link_after) {
	this->data = data;
	this->next_address = NULL;
	// cout << &link_after->next_address << endl;
	link_after->next_address = this;
}

Node Node::next(){
	return *next_address;
}
ChainLink Node::give_data() {
	return *data;
}
