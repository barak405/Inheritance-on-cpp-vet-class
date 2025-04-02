#include "vet.hpp"
#include <iostream>

Vet& Vet::get_instance(){
    
    
    static Vet instance;
    
    return instance;

}  


void Vet::add_animal(Animal *&&animal) { 
    animals.push_back(std::unique_ptr<Animal>(animal));
        
}

void Vet::show_sick() {
    //std::vector<std::string> sick_animals; 
    std::cout << "Sick animals --  \n"; 
    for (const auto& animal : animals) { 
        if(!animal->check_health()) { 
            std::cout << " - " << animal->animal_Name() << " is sick\n";
            
        }
    }
    
}
void Vet::show_sick_dogs() { 
    for (const auto& animal : animals) { 
        Dog* dog = dynamic_cast<Dog*>(animal.get());
        if(dog && !dog->check_health()) { 
           std::cout << animal->animal_Name() << "(Dog) is sick\n"; 
        }
    }

}
Vet::~Vet(){
    std::cout << "Vet Destractor is called\n";
    
}