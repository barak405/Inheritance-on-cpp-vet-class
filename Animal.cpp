#include <iostream>
#include "Animal.hpp"

Animal::Animal(std::string A_name, double A_temp, double A_breath,double A_heart )
        :name(A_name), temp(A_temp), breath(A_breath), heart(A_heart) {}


Animal::~Animal() {};        
bool Animal::check_health() { 
    std::cout << "Polymorphizem demenstrtion will be called in each child \n";
    return 0;
}
std::string Animal:: animal_Name(){
    return name;
}
