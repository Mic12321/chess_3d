#include "pawn.hpp"

bool Pawn::is_valid_move(Location new_location) {
    
    if (new_location.get_column()!=location.get_column()) { return false; }

    int row_forward_difference = (new_location.get_row() - location.get_row());

    if (row_forward_difference == 1) { return true; }

    else if (row_forward_difference==2 && never_moved) { return true; }

    return false;
}