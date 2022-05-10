#include <stdio.h>

#include "Deposito.c"
#include "Retirar.c"
#include "Imprimir.c"

void depositar(float *saldo, float deposito);
void retirarDinero(float *saldo, float retiro);
void imprimirCuenta(float saldo);


int main(int argc, char const *argv[])
{
    float cuenta = 1000;
    
    depositar(&cuenta, 200);
    imprimirCuenta(cuenta);
    retirarDinero(&cuenta, 600);
    imprimirCuenta(cuenta);

    
    return 0;
}
