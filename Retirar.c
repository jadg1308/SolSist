#include<stdio.h>
#include "Validar.c"

int validarSaldo(float saldo, float retiro);
float aplicarMulta(float saldo);

void retirarDinero(float *saldo, float retiro){
    int b = validarSaldo(*saldo, retiro);
    if(b == 1 || b == 0){
        printf(" Saldo actual C$: %.2f \n", *saldo);
        printf(" Retiro C$: %.2f\n", retiro);
        *saldo = *saldo - retiro;
        if (b == 0){
            *saldo = aplicarMulta(*saldo);
            printf(" Multa por esta bajo el minimo: C$ 100\n ");
        }
        printf(" Saldo Actual C$: %.2f \n", *saldo);
    }else{
        printf(" No tiene suficiente saldo para realizar el retiro \n");
    }
}

float aplicarMulta(float saldo){
    return saldo-=100;
    
}