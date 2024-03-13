#include <stdio.h>

int main()
{
    int numero[5]= {92, 23, 34, 56 ,76};
    int numero = 0;
    int narray = 0;
    while(numero <= 465)
{
    while(narray <= 4)
    {
        if(numero[narray]== numero)
        {
            printf("\n%d", numero);
            narray++;
        }
        else
        {
            narray++;
        }
    }
    narray = 0;
    numero++;
}
}
