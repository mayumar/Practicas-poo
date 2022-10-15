#include "basket.h"
#include <list>
#include "../product/product.h"

bool Basket::delete_product(Product product){
    std::list<Product>::iterator it;

    for(it=product_list_.begin(); it!=product_list_.end(); it++){
        if(product.get_id()==it->get_id()){
            product_list_.erase(it);
            return true;
        }
    }

    return false;
}

bool Basket::delete_product(std::string id){
    std::list<Product>::iterator it;

    for(it=product_list_.begin(); it!=product_list_.end(); it++){
        if(id==it->get_id()){
            product_list_.erase(it);
            return true;
        }
    }

    return false;
}