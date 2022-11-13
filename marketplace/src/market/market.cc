//market.cc
//A program that has the body of some of the functions
//from the "market" class

#include "market.h"
#include <list>
#include <string>
#include <fstream>

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

bool Market::add_product_seller(Product p, std::string id_seller){
    std::list<Seller>::iterator it;

    for(it=seller_list_.begin(); it!=seller_list_.end(); it++){
        if(id_seller==it->get_id()){
            it->add_product(p);
            return true;
        }
    }

    return false;

}

bool Market::add_product_client(Product p, std::string id_client){
    std::list<Client>::iterator it_c;
    std::list<Seller>::iterator it_s;

    for(it_c=client_list_.begin(); it_c!=client_list_.end(); it_c++){
        if(id_client==it_c->get_id()){
            for(it_s=seller_list_.begin(); it_s!=seller_list_.end(); it_s++){
                if(it_s->find_in_list(p.get_id())){
                    it_s->delete_product(p);
                    it_c->add_product(p);
                    return true;
                }
            }
        }
    }

    return false;

}

bool Market::delete_product_seller(Product p, std::string id_seller){
    std::list<Seller>::iterator it;

    for(it=seller_list_.begin(); it!=seller_list_.end(); it++){
        if(id_seller==it->get_id()){
            if(it->find_in_list(p.get_id())){
                it->delete_product(p);
                return true;
            }
        }
    }

    return false;

}

bool Market::delete_product_client(Product p, std::string id_client){
    std::list<Client>::iterator it;

    for(it=client_list_.begin(); it!=client_list_.end(); it++){
        if(id_client==it->get_id()){
            if(it->find_in_list(p.get_id())){
                it->delete_product(p);
                return true;
            }
        }
    }

    return false;

}

float Market::get_money_in_basket(){
    std::list<Client>::iterator it;
    float total;

    for(it=client_list_.begin(); it!=client_list_.end(); it++){
        total+=it->get_total();
    }

    return total;

}

void Market::dump_market(){
    std::fstream file;
    file.open("ventas.txt", std::fstream::out);
    std::list<Client>::iterator it;
    std::vector<std::string> products;
    std::vector<int> quantities;

    file<<"|----------------------------------------|"<<std::endl;
    file<<"|CLIENT ID   |PRODUCT ID |PRODUCT QTY    |"<<std::endl;
    
    for(it=client_list_.begin(); it!=client_list_.end(); it++){
        products=it->get_ids();
        quantities=it->get_qs();

        for(int i=0; i<it->get_size(); i++){
            file<<"|"<<it->get_id()<<"    |"<<products[i]<<"    |"<<quantities[i]<<"    |"<<std::endl;
        }

    }

    file<<"|----------------------------------------|"<<std::endl;
    file<<"|TOTAL: "<<get_money_in_basket()<<"€         |"<<std::endl;
    file<<"|----------------------------------------|"<<std::endl;

    file.close();
    
}