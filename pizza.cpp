#include <iostream>
#include "pizza.h"
using namespace std;



Pizza::Pizza(){
    this->num_ingredients = 3;//does this just mean the current namespace??? !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    this->ingredients = new string[this->num_ingredients];//reserve heap memory
    this->ingredients[0] = 69;//assign first value for test
    
    cout << "Pizza obect has been created... ";
}

Pizza::Pizza(Pizza& p){ //copy constructor, we need to define this so it's valid
    cout << "Calling: \"Pizza::Pizza(Pizza& p)\"" << endl;

    //base variables assigned
    this->num_ingredients = p.get_num_ingredients();
    this->ingredients = new string[this->num_ingredients];

}

void Pizza::set_name(string n){
    this->name = n;
    //this->name = name
}

string Pizza::get_name(){ //do I need to use ::
    return name;
}

void Pizza::set_num_ingredients(int i){
    this->num_ingredients = i;
}

int Pizza::get_num_ingredients(){
    return num_ingredients;
}

string* Pizza::get_ingredients(){
    return ingredients;
}


string Pizza::get_ingredient(int index){
    if(index < this->num_ingredients){
        return this->ingredients[index];
    }else{
        cout << "Invalid index - Current index is set to: " << this->num_ingredients << endl;
        return "FAIL";
    }
}



Pizza & Pizza::operator=(const Pizza& p){//assignment overload
    cout << "Assignment overload called" << endl;
    name = p.name; //works, scope is not private for .name? .get_name() doesn't work due to const keyword

    if(ingredients != NULL){
        delete[] ingredients;//causes seg fault
    }

    ingredients = new string[3];//reserve heap space
    for(int i = 0; i < 3; i++){
        ingredients[0] = "3"; //causes something wierd
    }

    //delete dynamic memory, free it if not null
    return *this;
}



Pizza::~Pizza(){
    cout << "Default Pizza destructor " <<  endl;
}