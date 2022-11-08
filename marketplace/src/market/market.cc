//market.cc
//A program that has the body of some of the functions
//from the "market" class

#include "market.h"
#include <list>

bool Market::add_client(Client client){
    std::list<Client>::iterator it;

    for(it=client_list_.begin(); it!=client_list_.end(); it++){
        if(client.get_id()==it->get_id()){
            return false;
        }
    }

    client_list_.push_back(client);
    return true;

}

bool Market::add_seller(Seller seller){
    std::list<Seller>::iterator it;

    for(it=seller_list_.begin(); it!=seller_list_.end(); it++){
        if(seller.get_id()==it->get_id()){
            return false;
        }
    }

    seller_list_.push_back(seller);
    return true;

}

bool Market::delete_client(Client client){
    std::list<Client>::iterator it;

    for(it=client_list_.begin(); it!=client_list_.end(); it++){
        if(client.get_id()==it->get_id()){
            client_list_.erase(it);
            return true;
        }
    }

    return false;

}

bool Market::delete_seller(Seller seller){
    std::list<Seller>::iterator it;

    for(it=seller_list_.begin(); it!=seller_list_.end(); it++){
        if(seller.get_id()==it->get_id()){
            seller_list_.erase(it);
            return true;
        }
    }

    return false;
    
}