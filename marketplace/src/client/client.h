#ifndef CLIENT_H
#define CLIENT_H

#include "../person/person.h"
#include "../basket/basket.h"
#include <string>

class Client: public Person{
    private:
        Basket basket_;
        int premium_;

    public:
        Client(std::string id_person,
               int premium,
               std::string id_basket,
               std::string name="empty",
               std::string surname="empty", 
               std::string address="empty",
               std::string town="empty", 
               std::string province="empty",
               std::string country="empty", 
               int entry_year=0): Person(id_person, name, surname, address, town,
                                  province, country), premium_(premium), basket_(id_basket){}

        inline int get_premium() const {return premium_;}
        inline int set_premium(int premium) {premium_=premium;}


};






#endif