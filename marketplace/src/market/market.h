//market.h
//A program which creates the class called "market"

//This class represents the marketplace

#ifndef MARKET_H
#define MARKET_H
#include <list>
#include <string>
#include "../client/client.h"
#include "../seller/seller.h"

class Market{
    private:
        std::list<Client> client_list_;
        std::list<Seller> seller_list_;
        std::string slogan_;

    public:
        inline Market(std::string slogan): slogan_(slogan){}
        inline ~Market(){}

        inline std::string get_slogan() const {return slogan_;}
        inline void set_slogan(std::string slogan){slogan_=slogan;}

        bool add_client(Client client);
        bool add_seller(Seller seller);
        inline int n_clients(){return client_list_.size();}
        inline int n_sellers(){return seller_list_.size();}
        bool delete_client(Client client);
        bool delete_seller(Seller seller);
        bool add_product_seller(Product p, std::string id_seller);
        bool add_product_client(Product p, std::string id_client);
        bool delete_product_seller(Product p, std::string id_seller);
        bool delete_product_client(Product p, std::string id_client);
        float get_money_in_basket();
        void dump_market();

};


#endif