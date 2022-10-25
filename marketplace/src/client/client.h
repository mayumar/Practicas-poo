#ifndef CLIENT_H
#define CLIENT_H

#include "../person/person.h"
#include "../basket/basket.h"

class Client: public Person{
    private:
        Basket basket_;
        int premium_;

    public:
        Client(std::string id,
               int premium,
               std::string name="empty",
               std::string surname="empty", 
               std::string address="empty",
               std::string town="empty", 
               std::string province="empty",
               std::string country="empty", 
               int entry_year=0): Product(id, name, surname, address, town
                                  province, country), premium_(premium);

        inline int get_premium() const {return premium_;}
        inline int set_premium(int premium) {premium_=premium;}


};






#endif