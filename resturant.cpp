#include <iostream>
#include "resturant.h"
using namespace std;

Resturant::Resturant(){
    cout << "Resturant constructor" << endl;
    address = "12345 Sesame Street";
    phone = "5033333393";
    this->week = new hours[5];
}
void Resturant::view_hours(){
    cout << Resturant::week << endl;
}
void Resturant::view_address(){
    cout << address;
}
void Resturant::view_phone(){
    cout << phone;
}
void Resturant::change_phone(){
    cout << "Enter new number";
    string num;
    cin >> num;
    this->phone = num;

}
Resturant::~Resturant(){
    delete[] this->week;
    cout << "Resturant destructor" << endl;
}