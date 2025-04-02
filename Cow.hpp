#ifndef COW_HPP
#define COW_HPP
#include "Animal.hpp"
 
//Cow PERAMATERS
//add milk prodaction
//temp = 38.5-39.5
//Respitory rate - 26-50
//Heart rate 48-84
//milk prodactoin >= 30  literss

class Cow : public Animal
{
    private: 
        double liters;  // signefy litters of milk 
        int Cow_couse_of_sicknes(); // check why the animal is sick , will 
    public:
        Cow( std::string name, double temp, double breath, double heart, double liters );
        
        bool check_health()  override;


};       





#endif
