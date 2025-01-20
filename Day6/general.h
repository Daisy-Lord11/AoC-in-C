#include "map.h"

class General{

public:
    // constructor
    General(Map* map);

    enum Direction {
        UP,
        RIGHT,
        DOWN,
        LEFT,
    }direction;

    //TESTER ~Knut
    int max_walk = 0;
    int cur_walk = 0;

    struct position{
        int x;
        int y;
    };   

    //functions
    void print_position();
    void print_map();

    void go_up();
    void go_down();
    void go_left();
    void go_right();

    struct position get_right();
    struct position get_left();
    struct position get_up();
    struct position get_down();

    void turn();

    void walk();

    bool is_up_blocked();
    bool is_down_blocked();
    bool is_left_blocked();
    bool is_right_blocked();

    Map::cell_type get_player();

    void set_position(unsigned int y, unsigned int x);

    bool is_loop();
    bool is_in_map();

    void next_map();

    int get_marks();
    struct position get_pos();

    bool is_barrier_end();

    //resets the position of barrier to (0, 0) 
    //if it is at the end to start over again
    void reset_barrier();

private:
    
    Map* map;

    struct position cur_pos;

    int* passed;
    int passed_size;

    void add_passed();

    void _init_position();
    void _init_direction();
    void _init_passed();
};
