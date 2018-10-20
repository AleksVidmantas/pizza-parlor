#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
#include <string>
using namespace std;

class Pizza {
    private:
        string name;
        int s_cost;
        int m_cost;
        int l_cost;
        int num_ingredients;
        string* ingredients;

    public:
        Pizza();
        /* Getters for private member variables */
        string get_name();
        int get_s_cost();
        int get_m_cost();
        int get_l_cost();
        int get_num_ingredients();

        string* get_ingredients();

        /* Setters for private member variables */
        void set_name(string name);
        void set_s_cost(int cost);
        void set_m_cost(int cost);
        void set_l_cost(int cost);
        void set_num_ingredients(int num_ingr);

        void add_ingredient(string ingredient); //add ingredient, grow list
        void set_ingredients(int index, string ingredient); //surgically set ingredient

        string get_ingredient(int index);
        
    



        Pizza(Pizza& p);//copy constructor
        Pizza& operator=(const Pizza& p); //assignment overload
       
        ~Pizza(); //destructor
}; 

#endif