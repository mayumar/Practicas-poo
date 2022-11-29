#include <iostream>
#include <vector>
#include <algorithm>

bool descendente(int i, int j) {return i > j;}
bool ascendente(int i, int j) {return i < j;}

int main(){
    int size, n, orden;
    std::cout<<"Introduzca el tamaño del vector: ";
    std::cin>>size;
    
    std::vector<int> v;

    std::cout<<"Introduzca valores para el vector: "<<std::endl;
    for(int i=0; i<size; i++){
        std::cin>>n;
        v.push_back(n);
    }

    std::cout<<"Indique el orden: "<<std::endl;
    std::cout<<"1 -> Ascendente"<<std::endl;
    std::cout<<"2 -> Descendente"<<std::endl;
    std::cin>>orden;

    switch(orden){
        case 1:
            std::sort(v.begin(), v.end(), ascendente);
        break;

        case 2:
            std::sort(v.begin(), v.end(), descendente);
        break;
    };

    std::cout<<"Vector ordenado: "<<std::endl;
    for(int i=0; i<size; i++){
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
