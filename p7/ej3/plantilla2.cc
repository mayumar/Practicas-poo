#include <iostream>

template <class T> class MiClase{
    private:
        T x_, y_;
    public:
        MiClase (T a, T b){x_=a; y_=b;};
        T div(){return x_/y_;};
};

int main(){
    MiClase <int> i(10, 3);
    MiClase <double> d(3.3, 5.5);

    std::cout << "División entera = " << i.div() << std::endl;
    std::cout << "División real = " << d.div() << std::endl;

    return 0;
}