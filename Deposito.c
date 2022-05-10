#include <stdio.h>


void depositar(float *saldo, float deposito){
    
    printf("\n Saldo Actual C$: %.2f", *saldo);
    printf("\n Deposito C$: %.2f", deposito);
    *saldo = *saldo + deposito;
    printf("\n Nuevo Saldo C$: %.2f \n", *saldo);
}
