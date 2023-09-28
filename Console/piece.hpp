#ifndef PIECE_HPP
#define PIECE_HPP

#include "colour.hpp"
#include "location.hpp"

class Piece {

    protected:
        Colour colour;
        Location location;

    public:
        virtual bool is_valid_move();
        Colour get_colour();
        

};
    
#endif