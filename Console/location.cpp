#include "location.hpp"

Location::Location(int _column, int _row) {
    column = _column;
    row = _row;
}

int Location::get_column() const { return column; }

int Location::get_row() const { return row; }