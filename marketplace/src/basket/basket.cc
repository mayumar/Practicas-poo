#include "basket.h"
#include <list>
#include <map>
#include <vector>
#include "../product/product.h"

bool Basket::delete_product(Product product){
    std::list<Product>::iterator it;

    for(it=product_list_.begin(); it!=product_list_.end(); it++){
        if(product.get_id()==it->get_id()){
            
            total_-=product.get_price();
            product_quantity_[product.get_id()]--;

            if(product_quantity_[product.get_id()]<=0){
                product_list_.erase(it);
            }

            return true;
        }
    }

    return false;
}

bool Basket::delete_product(std::string id){
    std::list<Product>::iterator it;

    for(it=product_list_.begin(); it!=product_list_.end(); it++){
        if(id==it->get_id()){
            
            total_-=it->get_price();
            product_quantity_[id]--;

            if(product_quantity_[id]<=0){
                product_list_.erase(it);
            }

            return true;
        }
    }

    return false;
}

void Basket::add_product(Product product){
    
    if(find_in_list(product.get_id())==false){
        product_list_.push_back(product);
        product_quantity_[product.get_id()]=1;
    }else{
        product_quantity_[product.get_id()]++;
    }

    total_+=product.get_price();
}

bool Basket::find_in_list(std::string id){
    std::list<Product>::iterator it;

    for(it=product_list_.begin(); it!=product_list_.end(); it++){
        if(id==it->get_id()){
            return true;
        }
    }

    return false;

}

std::vector<std::string> Basket::get_ids(){
    std::vector<std::string> product_list;
    std::list<Product>::iterator it;
    int i=0;

    for(it=product_list_.begin(); it!=product_list_.end(); it++){
        product_list[i]=it->get_id();
        i++;
    }

    return product_list;
}