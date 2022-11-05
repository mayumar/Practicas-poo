//basket_main.cc
//A little test of the "basket" class

#include "basket.h"
#include "../product/product.h"
#include <iostream>
#include <vector>

int main(){
    Basket basket("GRTE6778");
    Product p1("ID1", "Producto1", 5), p2("ID2", "Producto2", 6),
            p3("ID3", "Producto3", 2), p4("ID4", "Producto4", 7),
            p5("ID5", "Producto6", 9), p6("ID6", "Prodcuto6", 4);
    std::vector<std::string> vectorid;
    std::vector<int> vectorq;

    basket.add_product(p1);
    basket.add_product(p2);
    basket.add_product(p3);
    basket.add_product(p4);
    basket.add_product(p5);
    basket.add_product(p6);

    std::cout<<"Numero de productos en la cesta: "<<basket.get_size()<<std::endl;

    vectorid=basket.get_ids();
    vectorq=basket.get_qs();

    std::cout<<"Los productos son: "<<std::endl;

    for(int i=0; i<basket.get_size(); i++){
        std::cout<<vectorid[i]<<" "<<vectorq[i]<<std::endl;
    }

    std::cout<<std::endl;

    Product p7("ID5"), p8("ID1"), p9("ID3"), p10("ID5");

    basket.add_product(p7);
    basket.add_product(p8);
    basket.add_product(p9);
    basket.add_product(p10);

    std::cout<<"Numero de productos en la cesta: "<<basket.get_size()<<std::endl;

    vectorid=basket.get_ids();
    vectorq=basket.get_qs();

    std::cout<<"Los productos son: "<<std::endl;

    for(int i=0; i<basket.get_size(); i++){
        std::cout<<vectorid[i]<<" "<<vectorq[i]<<std::endl;
    }

    std::cout<<std::endl;

    basket.delete_product("ID2");
    basket.delete_product("ID5");

    std::cout<<"Numero de productos en la cesta: "<<basket.get_size()<<std::endl;

    vectorid=basket.get_ids();
    vectorq=basket.get_qs();

    std::cout<<"Los productos son: "<<std::endl;

    for(int i=0; i<basket.get_size(); i++){
        std::cout<<vectorid[i]<<" "<<vectorq[i]<<std::endl;
    }

    std::cout<<std::endl;

    basket.add_product(p2);
    basket.add_product(p5);

    std::cout<<"Numero de productos en la cesta: "<<basket.get_size()<<std::endl;

    vectorid=basket.get_ids();
    vectorq=basket.get_qs();

    std::cout<<"Los productos son: "<<std::endl;

    for(int i=0; i<basket.get_size(); i++){
        std::cout<<vectorid[i]<<" "<<vectorq[i]<<std::endl;
    }

    std::cout<<std::endl;

    basket.delete_product(p2);
    basket.delete_product(p5);

    std::cout<<"Numero de productos en la cesta: "<<basket.get_size()<<std::endl;

    vectorid=basket.get_ids();
    vectorq=basket.get_qs();

    std::cout<<"Los productos son: "<<std::endl;

    for(int i=0; i<basket.get_size(); i++){
        std::cout<<vectorid[i]<<" "<<vectorq[i]<<std::endl;
    }

    std::cout<<std::endl;

    return 0;
}