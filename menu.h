#ifndef MENU_H
#define MENU_H
#include <string>
#include "pizza.h"
using namespace std;

class Menu {
    private:
        int num_pizzas;
        Pizza* pizzas;

    public:
        int get_num_pizzas();
        Pizza* get_pizzas();  

        void set_num_pizzas();
        void add_pizza(Pizza pizza); //passing, does it matter if it's a pointer/reference, and how?     


        
}; 

#endif