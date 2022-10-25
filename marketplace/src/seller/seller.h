#ifndef SELLER_H
#define SELLER_H

#include "../person/person.h"
#include "../product/product.h"
#include <list>
#include <string>

class Seller: public Person{
    private:
        std::list<Product> product_sold_;
        std::string sector_;

    public:
        //Seller(){} constructor

        inline std::string get_sector() const {return sector_;}
        void set_sector(std::string sector) {sector_=sector;}

};




#endif