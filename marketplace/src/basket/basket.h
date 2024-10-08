//basket.h
//A program which creates the class called "basket"

//This class represents the list of products
//that a client wants to buy something from the marketplace

#ifndef BASKET_H
#define BASKET_H


#include <string>
#include <list>
#include <map>
#include <vector>
#include "../product/product.h"

class Basket{
    private:
        std::list<Product> product_list_;
        float total_;
        std::map<std::string, int> product_quantity_;

    public:
        inline Basket(){total_=0;}
        inline ~Basket(){}

        inline float get_total() const {return total_;}
        
        void add_product(Product product);
        bool delete_product(Product product);
        bool delete_product(std::string id);
        inline void delete_basket(){product_list_.clear();}
        inline int get_size(){return product_list_.size();}
        bool find_in_list(std::string id);
        std::vector<std::string> get_ids();
        std::vector<int> get_qs();

};

#endif