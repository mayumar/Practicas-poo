#include <iostream>
#include "../market/market.h"
#include "../client/client.h"
#include "../seller/seller.h"
#include "../product/product.h"
#include "app.h"
#include <string>
#include <vector>

int main(){
    Market m("Buenas tardes");
    Client c1("C1"), c2("C2"), c3("C3"), c4("C4"), c5("C5");
    Seller s1("S1"), s2("S2"), s3("S3"), s4("S4"), s5("S5");
    Product p1("P1", "Producto 1", 100.11), p2("P2", "Producto 2", 200.22),
            p3("P3", "Producto 3", 300.33), p4("P4", "Producto 4", 400.44),
            p5("P5", "Producto 5", 500.55);

    std::vector<Product>productos={p1, p2, p3, p4, p5};

    m.add_client(c1);
    m.add_client(c2);
    m.add_client(c3);
    m.add_client(c4);
    m.add_client(c5);

    m.add_seller(s1);
    m.add_seller(s2);
    m.add_seller(s3);
    m.add_seller(s4);
    m.add_seller(s5);

    m.add_product_seller(p1, "S1");
    m.add_product_seller(p2, "S1");
    m.add_product_seller(p3, "S1");
    m.add_product_seller(p4, "S1");
    m.add_product_seller(p5, "S1");

    m.add_product_seller(p1, "S2");
    m.add_product_seller(p2, "S2");
    m.add_product_seller(p3, "S2");
    m.add_product_seller(p4, "S2");
    m.add_product_seller(p5, "S2");

    m.add_product_seller(p1, "S3");
    m.add_product_seller(p2, "S3");
    m.add_product_seller(p3, "S3");
    m.add_product_seller(p4, "S3");
    m.add_product_seller(p5, "S3");

    m.add_product_seller(p1, "S4");
    m.add_product_seller(p2, "S4");
    m.add_product_seller(p3, "S4");
    m.add_product_seller(p4, "S4");
    m.add_product_seller(p5, "S4");

    m.add_product_seller(p1, "S5");
    m.add_product_seller(p2, "S5");
    m.add_product_seller(p3, "S5");
    m.add_product_seller(p4, "S5");
    m.add_product_seller(p5, "S5");

    int opt;

    do{
        
        std::cout<<std::endl;
        std::cout<<"Elija una opción: "<<std::endl;
        std::cout<<"1. Añadir producto en la cesta de un cliente pidiendo su id de cliente y el id del producto."<<std::endl;
        std::cout<<"2. Borrar producto de la cesta de un cliente pidiendo su id de cliente y el id del producto."<<std::endl;
        std::cout<<"3. Volcar datos al fichero de salida ventas.txt."<<std::endl;
        std::cout<<"4. Salir del programa."<<std::endl;
        std::cin>>opt;
        std::cout<<std::endl;

        if(opt<1 || opt>4){
            std::cout<<"Introduzca una de las 4 opciones"<<std::endl;
        }
        
        std::string client_id, product_id;
        bool flag=false;
        switch(opt){
            case 1:

                std::cout<<"Introduzca el id del producto a añadir"<<std::endl;
                std::cin>>product_id;
                std::cout<<"Introduzca el id del cliente a añadir el producto"<<std::endl;
                std::cin>>client_id;

                for(int i=0; i<productos.size(); i++){
                    if(product_id==productos[i].get_id()){
                        flag=m.add_product_client(productos[i], client_id);
                    }
                }

                if(flag==false){
                    std::cout<<std::endl<<"Error: no se ha podido añadir el producto"<<std::endl;
                }else if(flag==true){
                    std::cout<<std::endl<<"El producto ha sido añadido con exito"<<std::endl;
                }
                
                break;

            case 2:
                
                std::cout<<"Introduzca el id del producto a borrar"<<std::endl;
                std::cin>>product_id;
                std::cout<<"Introduzca el id del cliente a borrar el producto"<<std::endl;
                std::cin>>client_id;

                for(int i=0; i<productos.size(); i++){
                    if(product_id==productos[i].get_id()){
                        flag=m.delete_product_client(productos[i], client_id);
                    }
                }

                if(flag==false){
                    std::cout<<std::endl<<"Error: no se ha podido borrar el producto"<<std::endl;
                }else if(flag==true){
                    std::cout<<std::endl<<"El producto ha sido borrado con exito"<<std::endl;
                }
                

                break;
            case 3:
                
                m.dump_market();

                break;
        }
        

    }while(opt!=4);




    return 0;
}