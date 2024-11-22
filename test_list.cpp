using namespace std;

#include "chainlinklist.hpp"
#include <iostream>
#include <string>
#include <cassert>

int main()
{
    ChainLinkList list;
    ChainLink first("Color One");
    ChainLink second("Color Two");

    list.add_node(&first);
    list.add_node(&second);

    assert(list.get_link(1).get_color() == "Color One");
    assert(list.get_link(2).get_color() == "Color Two"); 

    cout << "ChainLikeList Works" << endl;

    return 0;
}
