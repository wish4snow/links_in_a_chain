#include "chain_link.hpp"
using namespace std;

ChainLink::ChainLink(string color) {
	this->color = color;
}

string ChainLink::get_color() {
	return this->color;
}
