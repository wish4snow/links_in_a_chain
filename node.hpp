#include <iostream>
#include "chain_link.hpp"

using namespace std;

class Node{
	private:
		ChainLink *data;
		Node *next_address;
	public:
		Node(ChainLink *data);
		Node(ChainLink *data, Node *link_after);
		Node next();
		ChainLink give_data();
};
