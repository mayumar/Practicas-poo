#include <iostream>
#include <string>
#include "person.h"

int main(){
    Person person1("RE456", "Juanito", "Pato", "Granja",
                   "Cordoba", "Nose", "Minecraft", 3456);


    std::string full_address=Person::get_full_address();
    
    std::cout<<full_address;

    std::cout<<"\n";

    std::cout<<person1.get_name()<<"\n";
    
    person1.set_entry_day(4567);
    
    std::cout<<person1.get_entry_year()<<"\n";




    return 0;
}