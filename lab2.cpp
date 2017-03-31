#include "lab2elo.h"
#include <cmath>
#include <iostream>
void Elo::setstart(int a,float b,float c){
     k=a;
     Ra=b;
     Rb=c;
}
void Elo::setstart1(float d){
     Sa=d;
     Sb=1-d;
}
void Elo::eloelo(){
     Ea=1/(1+pow(10,(Rb-Ra)/400));
     Eb=1/(1+pow(10,(Ra-Rb)/400));
     rad=Ra+k*(Sa-Ea);
     rbd=Rb+k*(Sb-Eb);
     Ra=round(Ra);
     Rb=round(Rb);
}
int Elo::getstart1(){
    return (int)rad;
}
int Elo::getstart2(){
    return (int)rbd;
}

