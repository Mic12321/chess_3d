#ifndef BOARD_HPP
#define BOARD_HPP

#include "colour.hpp"
#include <vector>
#include <string>

class Board {

    private:
        std::vector<std::vector<std::string>> grid;
    
    protected:
        int column;
        int row;

    public:
        int get_column() const;
        int get_row() const;
        std::vector<std::vector<Piece>> get_content();

    


};
    
#endif