#ifndef PIECE_HPP
#define PIECE_HPP

#include "colour.hpp"
#include "location.hpp"
#include <string>
#include <vector>

class Piece {

    protected:
        Colour colour;
        Location location;

    public:
        virtual bool is_valid_move();
        Colour get_colour();
        

    public:
        virtual bool is_valid_move(Location currentLocation, Location targetLocation, std::vector<std::vector<std::string>> grid);

};
    
#endif