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

        ChainLink get_link()
        {
            return *link;
        }

        Node* get_next()
        {
            return this->next;
        }

};