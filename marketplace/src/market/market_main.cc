//market_main.cc
//A little test of the "market" class

#include "market.h"
#include <iostream>

int main(){
    Market m("Hola buenas tardes");

    std::cout<<m.get_slogan()<<std::endl;


    return 0;
}