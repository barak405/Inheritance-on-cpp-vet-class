#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
 
//cAT PERAMATERS
//temp = 38-39.2
//Respitory rate - 16-40
//Heart rate 120-140
class Cat : public Animal
{  
    private: 
        int Cat_couse_of_sicknes();
    public:
        Cat(std::string name, double temp, double breath, double heart);
        ~Cat() override;
        bool check_health()  override;


};





#endif
