
#pragma once
#include <vector>
#include <string>
#include "Direction.hpp"
namespace ariel{
    class Board{
    private:
            std::vector<std::string> board;
            unsigned int horizontal_start=INT32_MAX;
            unsigned int horizontal_end=0;
            unsigned int start=INT32_MAX;
            unsigned int end=0;
    public:
        Board() noexcept: board(0,"_"){};
        void post(unsigned int indexi, unsigned int indexj, Direction d, const std::string &message);
        std::string read(unsigned int indexi, unsigned int indexj, Direction d, unsigned int length);
        void show();
    };

   
}