#include "contador.h"

Contador::Contador(int valor, int min, int max){
    
    if(min>max){
        valor_=0;
        min_=0;
        max_=1000;

    }else if(min==0 && max==1000){
        
        if(valor<min || valor>max){
            valor_=0;
            min_=min;
            max_=max;
        }else{
            valor_=valor;
            min_=min;
            max_=max;
        }

    }else if(valor<min || valor>max){
        valor_=0;
        min_=0;
        max_=1000;

    }else{
        valor_=valor;
        min_=min;
        max_=max;
    }

}

Contador Contador::operator=(const int num){
    valor_=num;

    return *this;
}

Contador Contador::operator=(const Contador &c){
    valor_=c.valor_;
    min_=c.min_;
    max_=c.max_;

    return *this;
}

Contador Contador::operator++(void){ //++c
    valor_++;
    return *this;
}

Contador Contador::operator++(int){ //c++
    Contador aux=*this;
    valor_++;
    return aux;
}

Contador Contador::operator--(void){ //--c
    valor_--;
    return *this;
}

Contador Contador::operator--(int){ //c--
    Contador aux=*this;
    valor_--;
    return aux;
}