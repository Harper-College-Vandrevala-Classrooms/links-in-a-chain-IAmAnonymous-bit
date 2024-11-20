#pragma once

using namespace std;

#include "node.hpp"

class ChainLinkList
{
    private:
        Node *head;
        int link_size();
    public:
        ChainLinkList()
        {
            this->head = nullptr;
        }

        void add_node(Node *new_node)
        {
            if (head == nullptr)
            {
                head->add_next(new_node);
                return;
            }

            Node *current = head;

            while(current->get_next() != nullptr)
            {
                current = current->get_next();
            }
            current->get_next()->add_next(new_node);

        }

};