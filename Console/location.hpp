<<<<<<< HEAD
#ifndef LOCATION_HPP
#define LOCATION_HPP

=======
>>>>>>> 820acc6 (Added a virtual function with parameters)
class Location {

    private:
        int column;
        int row;

<<<<<<< HEAD
    
    public:
        Location(int _location, int _row);
        int get_column() const;
        int get_row() const;

};



#endif
=======
    public:
        Location(int _column, int _row);

        int get_column();
        int get_row();
};
>>>>>>> 820acc6 (Added a virtual function with parameters)
