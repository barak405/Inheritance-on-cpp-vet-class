#ifndef VET_HPP
#define VET_HPP


#include <vector>
#include <memory>
#include "Animal.hpp" 
#include "Dog.hpp"

class Vet
{
    public: 
        
        static Vet& get_instance();

        void add_animal(Animal * &&);

        void show_sick() ;
        void show_sick_dogs();
        
        

    private:
        Vet() : animals() {}

        ~Vet();
        
        Vet( Vet&) = delete;
        Vet& operator= (Vet&) = delete;

        std::vector<std::unique_ptr<Animal>> animals;
        

};






#endif