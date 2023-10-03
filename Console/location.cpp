<<<<<<< HEAD
#include "location.hpp"

Location::Location(int _column, int _row) {
=======
Location(int _column, int _row) {
>>>>>>> 820acc6 (Added a virtual function with parameters)
    column = _column;
    row = _row;
}

<<<<<<< HEAD
int Location::get_column() const { return column; }

int Location::get_row() const { return row; }
=======
int get_column() { return column; }
int get_row() { return row; }
>>>>>>> 820acc6 (Added a virtual function with parameters)
