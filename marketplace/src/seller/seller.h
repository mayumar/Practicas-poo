//seller.h
//A program which creates the class called "seller"

//This class represents the person who will be selling
//the products from the marketplace

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
        Seller(std::string id,
               std::string name="empty",
               std::string surname="empty",
               std::string address="empty",
               std::string town="empty", 
               std::string province="empty",
               std::string country="empty", 
               int entry_year=0,
               std::string sector=""): Person(id, name, surname,
                                            address, town, province, country, entry_year),
                                            sector_(sector){}

        inline std::string get_sector() const {return sector_;}
        void set_sector(std::string sector) {sector_=sector;}

};




#endif