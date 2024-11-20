#pragma once

using namespace std;

#include <string>

class ChainLink
{
    private:
      string color;

    public:
        ChainLink()
        {
            this->color = "Gray";
        }

        ChainLink(string color)
        {
            this->color = color;
        }

        string get_color()
        {
            return this->color;
        }
};