#ifndef CONTADOR_H
#define CONTADOR_H

#include <iostream>

class Contador{
    private:
        int valor_, min_, max_;
    public:
        Contador(int valor=0, int min=0, int max=1000);

        inline int get() const {return valor_;}

        Contador operator=(const int i);
        Contador operator=(const Contador &c);
        Contador operator++(void);
        Contador operator++(int);
        Contador operator--(void);
        Contador operator--(int);
        Contador operator+(const int i);
        friend Contador operator+(const int i, const Contador &c);
        Contador operator-(const int i);
        friend Contador operator-(const int i, const Contador &c);
        friend std::ostream &operator<<(std::ostream &stream, const Contador &c);
        friend std::istream &operator>>(std::istream &stream, Contador &c);
        

};




#endif