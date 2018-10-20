#ifndef RESTURANT_H
#define RESTURANT_H
#include <iostream>
#include <string>
#include "employee.h"
#include "hours.h"
using namespace std;

class Resturant {
    private:/*
        Menu menu;
        
        hours* week;*/
        hours* week;
        employee* employees;
        string name;
        string phone;
        string address;

    public://can I name things myself
        Resturant();
        void view_hours();
        void view_address();
        void view_phone();
        void change_hours();
        void change_phone();
        ~Resturant();


        
}; 

#endif