#ifndef LOCATION_HPP
#define LOCATION_HPP

class Location {

    private:
        int column;
        int row;

    
    public:
        Location(int _location, int _row);
        int get_column() const;
        int get_row() const;

};



#endif