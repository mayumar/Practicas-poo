#include "contador.h"

Contador::Contador(int valor, int min, int max){
    
    if(min>max || valor<min || valor>max){
        valor_=0;
        min_=0;
        max_=1000;
    }else{
        valor_=valor;
        min_=min;
        max_=max;
    }

}

Contador Contador::operator=(const int i){
    valor_=i;

    if(valor_>max_){
        valor_=max_;
    }else if(valor_<min_){
        valor_=min_;
    }

    return *this;
}

Contador Contador::operator=(const Contador &c){
    valor_=c.valor_;
    min_=c.min_;
    max_=c.max_;

    if(valor_>max_){
        valor_=max_;
    }else if(valor_<min_){
        valor_=min_;
    }

    return *this;
}

Contador Contador::operator++(void){ //++c
    valor_++;

    if(valor_>max_){
        valor_=max_;
    }


    return *this;
}

Contador Contador::operator++(int){ //c++
    Contador aux=*this;
    valor_++;

    if(valor_>max_){
        valor_=max_;
    }

    return aux;
}

Contador Contador::operator--(void){ //--c
    valor_--;

    if(valor_<min_){
        valor_=min_;
    }

    return *this;
}

Contador Contador::operator--(int){ //c--
    Contador aux=*this;
    valor_--;

    if(valor_<min_){
        valor_=min_;
    }

    return aux;
}

Contador Contador::operator+(const int i){
    Contador aux=*this;
    
    aux.valor_=valor_+i;

    if(aux.valor_>aux.max_){
        aux.valor_=aux.max_;
    }

    return aux;
}

Contador operator+(const int i, const Contador &c){
    Contador aux=c;

    aux.valor_=i+c.valor_;

    if(aux.valor_>aux.max_){
        aux.valor_=aux.max_;
    }

    return aux;
}

Contador Contador::operator-(const int i){
    Contador aux=*this;
    
    aux.valor_=valor_-i;

    if(aux.valor_<aux.min_){
        aux.valor_=aux.min_;
    }

    return aux;
}

Contador operator-(const int i, const Contador &c){
    Contador aux= c;

    aux.valor_=i-c.valor_;

    if(aux.valor_<aux.min_){
        aux.valor_=aux.min_;
    }

    return aux;
}

std::ostream &operator<<(std::ostream &stream, const Contador &c){
    stream << c.valor_;

    return stream;
}

std::istream &operator>>(std::istream &stream, Contador &c){
    bool error=false;

    do{
        std::cout << "Introduzca un valor para el contador: ";
        stream >> c.valor_;

        if(c.valor_<c.min_ || c.valor_>c.max_){
            
            std::cout << "Error: el valor está fuera de los límites" << std::endl;
            error=true;

        }else{

            std::cout<<"Valor del contador correcto"<<std::endl;
            error=false;
        }

    }while(error);

    return stream;
}