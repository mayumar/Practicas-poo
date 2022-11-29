#include <iostream>

template <class T> void print_vector(T *v, const int n){
    for (int i=0; i<n; i++){
        std::cout << v[i] << " ";
    }
    std::cout<<std::endl;
}

int main(void){
    int i[5]={1,2,3,7,9};
    float f[4]={5.6, 7.8, 3.9, 1.2};
    char c[14]="hola que tal";

    std::cout << "Vector de enteros:" << std::endl;
    print_vector(i, 5);
    std::cout << "Vector de floats:" << std::endl;
    print_vector(f, 4);
    std::cout << "Vector de char:" << std::endl;
    print_vector(c, 12);

    return 0;
}