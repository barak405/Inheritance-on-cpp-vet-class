#include "cat.hpp"


int Cat::Cat_couse_of_sicknes() { 
    std::cout << "Couse of sicknes-- ";
    if (temp < 38 ) { 
        return Low_temp;
    } // 0 is low temp
    else if( temp >39.2) { 
        return High_temp;
    }
    else if(breath > 40 ) { 
        return Rr_big;
    }
    else if(breath <16) {
        return Rr_small;
    }
    
    else if(heart > 140) { 
        return Hr_big;
    }
    else if(heart < 120) { 
        return Hr_small;
    }


    return -1; //should never get here 
}

Cat::Cat(std::string name, double temp, double breath, double heart) 
    :Animal(name, temp, breath, heart) {}

Cat::~Cat() {}
bool Cat::check_health() {
    if ( (38 <= temp && temp <= 39.2) && (16 <= breath && breath <= 40)
        && (  120 <= heart && heart <= 140 )) { 
            return true;
        }
    else{ 
        //std::cout << "Cat is Sick\t " ;
        switch (Cat_couse_of_sicknes())
            {
            case Low_temp:
            //    std::cout << " temp to low\n"; //
                break;
            case High_temp:
            //    std::cout << " temp to High\n"; 
                break;
            case Rr_big:
            //    std::cout << " Respiratory rate to High\n"; 
                break;
            case Rr_small:
                std::cout << " Respiratory rate to Low\n";
                break;
            case Hr_big:
                std::cout << " Heart  rate is to High for a cat\n";
                break;
            case Hr_small: 
                std::cout << " Heart  rate is to low for a cat\n";
                break;
            default:
                std::cout << " couse of sicknes uknown\n"; // never should get here 
                break;
            }
            
        return false;
        }
        

}