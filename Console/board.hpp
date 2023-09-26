#ifndef BOARD_HPP
#define BOARD_HPP

#include "colour.hpp"
#include "piece.hpp"
#include <vector>

class Board {

    private:
        std::vector<std::vector<Piece>> content;
    
    protected:
        int column;
        int row;

    public:
        int get_column() const;
        int get_row() const;

    


};
    
#endif