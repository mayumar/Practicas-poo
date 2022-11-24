#ifndef CONTADOR_H
#define CONTADOR_H

class Contador{
    private:
        int valor_, min_, max_;
    public:
        Contador(int valor=0, int min=0, int max=1000);

        inline int get() const {return valor_;}

        Contador operator=(const int num);
        Contador operator=(const Contador &c);
        Contador operator++(void);
        Contador operator++(int);
        Contador operator--(void);
        Contador operator--(int);

};




#endif