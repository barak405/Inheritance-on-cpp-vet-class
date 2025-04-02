#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include <iostream>
#include <string>
//the dog class should include , healthy fucntion with the parameters of , 
//60-100 is a health heart rate if large, 100-140 is healthy if small
//body temp - 38-39.2 is healty
//Respiratory rate 10-35

class Dog : public Animal
{
private:
    bool is_large;
    int Dog_couse_of_sicknes();
public:
    Dog(std::string name, double temp, double breath, double heart, bool is_large);
    ~Dog() override;
    bool check_health()  override;

};













#endif