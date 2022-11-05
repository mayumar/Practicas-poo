//tv.cc
//A program that has the body of some of the functions
//from the "tv" class

#include "tv.h"

bool Tv::set_inch(float inch){
    if(inch>0){
        inch_=inch;
        return true;
    }else{
        return false;
    }
}