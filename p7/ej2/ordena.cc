#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int size, n;
    std::cout<<"Introduzca el tamaño del vector: ";
    std::cin>>size;
    
    std::vector<int> v;

    std::cout<<"Introduzca valores para el vector: "<<std::endl;
    for(int i=0; i<size; i++){
        std::cin>>n;
        v.push_back(n);
    }

    std::sort(v.begin(), v.end());

    std::cout<<"Vector ordenado: "<<std::endl;
    for(int i=0; i<size; i++){
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}