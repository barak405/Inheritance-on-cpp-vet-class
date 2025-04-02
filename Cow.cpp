#include "Cow.hpp"

int Cow::Cow_couse_of_sicknes() { 
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
    }else { 
        return milk;
    } //last option is That the Cow didnt preduce enoth milk 

    
}
Cow::Cow(std::string name, double temp, double breath, double heart, double liters) 
    :Animal(name, temp, breath, heart), liters(liters) {}


bool Cow::check_health() {
    if ( (38.5 <= temp && temp <= 39.5) && (26 <= breath && breath <= 50)
        && (  48 <= heart && heart <= 84 ) && (  liters >= 30 )) { 
            std::cout << "cow is healthy\n" ; 
            return true;
        }
    else
    std::cout << "cow is Sick " ; 
    switch (Cow_couse_of_sicknes())
    {
    case Low_temp:
        std::cout << " (temp to low)\n"; //
        break;
    case High_temp:
        std::cout << " (temp to High)\n"; 
        break; 
    case Rr_big:
        std::cout << " (Respiratory rate to High)\n"; 
        break;
    case Rr_small:
        std::cout << " Respiratory rate to Low\n";
        break;
    case Hr_big:
        std::cout << " (Heart rate is to High for a Cow)\n";
        break;
    case Hr_small: 
        std::cout << " (Heart rate is to low for a Cow)\n";
        break;
    default:
        std::cout << " (couse of sicknes uknown)\n"; // never should get here 
        break;
    }
    
    return false;
        
 
}