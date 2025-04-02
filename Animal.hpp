#ifndef ANIMEL_HPP
#define ANIMEL_HPP
#include <iostream>
#include <string>
 

enum Sick_couse { // we implenet a couse of sicknes 
    Low_temp, High_temp,
    Rr_big, Rr_small,
    Hr_big, Hr_small,
    Hr_big_Big_D, Hr_small_Big_D,
    Hr_big_Small_D, Hr_small_Small_D,
    milk
}; 

class Animal{ 
    //protected for inhartance 
    protected:
        std::string name;
        double temp;
        double breath;
        double heart;

        friend class Vet;

    public:
        Animal(std::string A_name, double A_temp, double A_breath,double A_heart );        
       
        virtual ~Animal(); // define as virtual , i would like it do delet the children ass well
        virtual bool check_health();
        std::string animal_Name();

};

#endif