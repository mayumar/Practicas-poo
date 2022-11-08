//computer_main.cc
//A little test of the "computer" class

#include "computer.h"
#include <iostream>

int main(){
    Computer computer1("GF566", ComputerType::Desktop,
                       "PC to guapo", 03.56, "Pepito", "Juanito");
                       

    std::cout<<computer1.get_name()<<std::endl;
    
    if(computer1.get_type()==ComputerType::Desktop){
        std::cout<<"Desktop"<<std::endl;
    }

    computer1.set_type(ComputerType::Laptop);

    if(computer1.get_type()==ComputerType::Laptop){
        std::cout<<"Laptop"<<std::endl;
    }



    return 0;
}