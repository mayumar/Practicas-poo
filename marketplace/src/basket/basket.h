#ifndef BASKET_H
#define BASKET_H

#include <string>
#include <list>
#include "../product/product.h"

class Basket{
    private:
        std::string id_;
        std::list<Product> product_list_;
        float total_;

    public:
        Basket(std::string id): id_(id){}

        inline std::string get_id() const {return id_;}
        inline void set_id(std::string id){id_=id;}

        inline void add_product(Product product){product_list_.push_back(product);}
        bool delete_product(Product product);
        bool delete_product(std::string id);
        inline void delete_basket(){product_list_.clear();}
        inline int get_size(){return product_list_.size();}

};










#endif