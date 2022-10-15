//guess.cc
//A program that let you try to guess a random number

#include <iostream>
#include <cstdlib>
#include <ctime>

int randomnumber(){

    srand(time(NULL));

    return (rand()%11);
}

int main(){
    int i, random=randomnumber();

    std::cout<<"Introduzca un numero del 1 al 10: \n";
    std::cin>>i;

    while(i!=random){
        if(i>random){
            std::cout<<"El numero es menor\n";
        }
        if(i<random){
            std::cout<<"El numero es mayor\n";
        }
        std::cin>>i;
    }

    std::cout<<"Enhorabuena, lo has adivinado!\n";

    return 0;
}