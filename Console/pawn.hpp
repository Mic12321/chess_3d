#ifndef PAWN_HPP
#define PAWN_HPP

#include "piece.hpp"

class Pawn: public Piece{

    private:
        bool never_moved;

    public:
        bool is_valid_move(Location new_location);
    
};



#endif