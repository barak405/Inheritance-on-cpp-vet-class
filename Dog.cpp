#include "Dog.hpp"


//bool Dog::dog_helthy_specs(double temp, double breath, double heart, bool is_large) { 


//}

int Dog::Dog_couse_of_sicknes() {// a private function that checks why the dog is sick 
    
    if (temp < 38 ) { 
        return Low_temp;
    } // 0 is low temp
    else if( temp >39.2) { 
        return High_temp;
    }
    else if(breath > 35 ) { 
        return Rr_big;
    }
    else if(breath <10) {
        return Rr_small;
    }
    //in case of a large dog 
    else if(is_large == true){
        if(heart > 100) { 
            return Hr_big_Big_D;
        }
        else if(heart < 60) { 
            return Hr_small_Big_D;
        }
    }else {
            if(heart > 100) { 
                return Hr_big_Small_D;
            }else { // the only other choise 
                return Hr_small_Small_D;
            }
        }


    return -1; //should never get here 
    
}

Dog::Dog(std::string name, double temp, double breath, double heart, bool is_large) 
        : Animal(name, temp, breath, heart), is_large(is_large) {}

Dog::~Dog() {} 

bool Dog::check_health() { 

    if(is_large == true) { 
        if(( temp >= 38 && temp <= 39.2 ) && (breath >= 10 && breath <= 35) 
            && (heart >=60 && heart <=100)) { 
                std::cout << "Dog is Healthy\n";
                return true;
            } 

        else{ // large dog is sick , check why 
            std::cout << "Big Dog is Sick -- ";
            switch (Dog_couse_of_sicknes())
            {
            case Low_temp:
                std::cout << " temp to low\n"; 
                break;
            case High_temp:
                std::cout << " temp to High\n"; 
                break;
            case Rr_big:
                std::cout << " Respiratory rate to High\n"; 
                break;
            case Rr_small:
                std::cout << " Respiratory rate to Low\n";
                break;
            case Hr_big_Big_D:
                std::cout << " Heart  rate is to High for a large dog\n";
                break;
            case Hr_big_Small_D: 
                std::cout << " Heart  rate is to low for a large dog\n";
                break;
            default:
                std::cout << " couse of sicknes uknown\n"; // never should get here 
                break;
            }
            
            return false;
        }
    }
    else{  // its a small dog
        if(( temp >= 38 && temp <= 39.2 ) && (breath >= 10 && breath <= 35) 
        && (heart >=100 && heart <=140)) { 
            return true;
        }
        else {
            std::cout << "Small Dog is Sick -- ";
            switch (Dog_couse_of_sicknes())
            {
            case Low_temp:
                std::cout << " temp to low\n"; 
                break;
            case High_temp:
                std::cout << " temp to High\n"; 
                break;
            case Rr_big:
                std::cout << " Respiratory rate to High\n"; 
                break;
            case Rr_small:
                std::cout << " Respiratory rate to Low\n";
                break;
            case Hr_big_Small_D:
                std::cout << " Heart  rate is to High for a small dog\n";
                break;
            case Hr_small_Small_D: 
                std::cout << " Heart  rate is to low for a Small dog\n";
                break;
            default:
            std::cout << " couse of sicknes uknown\n"; // never should get here 
                break;
            }
            
            return false;
        }
    }
                       
}
    

