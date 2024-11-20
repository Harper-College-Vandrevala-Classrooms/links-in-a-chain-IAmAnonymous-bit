using namespace std;

#include "node.hpp"
#include <iostream>
#include <string>
#include <cassert>

int main()
{
    ChainLink first;
    Node first_node(&first);

    assert(first_node.get_link_color() == "Gray");

    ChainLink second("Red");
    Node second_node(&second);
    first_node.add_next(&second_node);

    assert(first_node.get_next()->get_link_color() == "Red");

    ChainLink third("Black");
    Node third_node(&third);
    second_node.add_next(&third_node);

    assert(first_node.get_next()->get_next()->get_link_color() == "Black");

    cout << "Node Works" << endl;

    return 0;
}