#pragma once

using namespace std;

#include "node.hpp"
#include <iostream>

class ChainLinkList
{
    private:
        Node *head;
        int list_size;
    public:
        ChainLinkList()
        {
            this->head = nullptr;
        }

        void add_node(ChainLink *new_link)
        {

            Node *new_node = new Node(new_link);
            if (head == nullptr)
            {
                head = new_node;
                list_size++;
            } else {
                Node *current = head;
                while (current->get_next() != nullptr)
                {
                    current = current->get_next();
                }
                current->add_next(new_node);
            }
        }

        ChainLink get_link(int index)
        {
            if (index > list_size)
            {
                throw std::invalid_argument("Position Out of Bounds");
            }
            Node *current = head;
            for (int i = 1; i < index; i++)
            {
                current = current->get_next();
            }
            ChainLink value = current->get_link();
            return value;
            
        }

};