#include <iostream>
#include "pizza.h"
#include "resturant.h"
using namespace std;

void test(Pizza p){
    cout << "Passed in p is " << &p << endl; 
    string* ing_point = p.get_ingredients();
    cout << "(DM)Pointer passed address at: " << ing_point << endl; //Pointer passed address at: 0x55c56a7c9c90
    //*ing_point = "420"; 
    //cout << "Passed in Ingredient at 0: " << p.get_ingredients()[0] <<endl; //SEGFAULT
    cout << "Passed in string* is at: " <<  p.get_ingredient(0) <<endl; //should print address of p.get_ingr
}

int main(){
    Pizza pep1;//constructor not being called
    cout << &pep1 << endl; //prints memory of actual object's location
    string* ing_point = pep1.get_ingredients();//original address
    cout << "Original test: " << pep1.get_ingredient(0) << endl;
    cout << "(DM)Original address of ingredients at " << ing_point<<endl;
    cout << "Original ingredient at 0 is: " << pep1.get_ingredients()[0] << endl;
    string* t = pep1.get_ingredients();

    cout << "Pointer address at: " << t << endl;//outputs Pointer address at: 0x55c56c8e9e78
    test(pep1);

    return 0;
}
