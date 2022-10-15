#include "product.h"
#include <iostream>

int main(){
    Product product1("DF4546", "Juanito", 4.8, "Pepito", "Antonio");

    std::cout<<product1.get_seller()<<std::endl;

    product1.set_id("JY3456");

    std::cout<<product1.get_id()<<std::endl;

    return 0;
}