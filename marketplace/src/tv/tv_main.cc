#include <iostream>
#include "tv.h"

int main(){
    Tv tv1("HG456", "Tele", 5.6, "Juanito", "Pepito", 456.8);

    std::cout<<tv1.get_id()<<std::endl;

    tv1.set_inch(25.7);
    tv1.set_inch(-3);

    std::cout<<tv1.get_inch()<<std::endl;

    return 0;
}