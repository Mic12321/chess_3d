#include "board.hpp"


int Board::get_column() const { return column; }
int Board::get_row() const { return row; }

std::vector<std::vector<Piece>> Board::get_content() { return content; }