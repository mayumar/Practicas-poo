#include "basket.h"
#include "../product/product.h"
#include <iostream>

int main(){
    Basket basket("GRTE6778");
    Product p1("HSSER5567", "Producto1", 5), p2("ET678", "Producto2", 6);
    bool deleted;

    basket.add_product(p1);
    basket.add_product(p2);

    std::cout<<"El tamaño de la lista es : "<<basket.get_size()<<std::endl;

    deleted=basket.delete_product(p1);

    std::cout<<"deleted p1: "<<deleted<<std::endl;

    basket.add_product(p1);

    deleted=basket.delete_product("ET678");

    std::cout<<"deleted p2: "<<deleted<<std::endl;
    std::cout<<"El tamaño de la lista es : "<<basket.get_size()<<std::endl;



    return 0;
}