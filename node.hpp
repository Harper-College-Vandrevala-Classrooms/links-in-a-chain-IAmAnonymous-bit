#pragma once

#include "chainlink.hpp"
#include <string>

class Node
{
    private:
        ChainLink *link;
        Node *next;
    public:
        Node()
        {
            this->link = nullptr;
            this->next = nullptr;
        }

        Node(ChainLink *link)
        {
            this->link = link;
            this->next = nullptr;
        }

        void add_next(Node *next)
        {
            this->next = next;
        }

        string get_link_color()
        {
            return this->link->get_color();
        }

        Node* get_next()
        {
            return this->next;
        }

};