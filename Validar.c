#include <stdio.h>

int validarSaldo(float saldo, float retiro){
    int dif = saldo - retiro;
    if(dif < 1000 && dif >0){
        return 0;
    }
    if(dif >= 1000){
        return 1;
    }
    if(dif <= 0){
        return -1;
    }
}