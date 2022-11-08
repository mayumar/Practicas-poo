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
        inline int n_seller(){return seller_list_.size();}
        bool delete_client(Client client);
        bool delete_seller(Seller seller);

};



#endif