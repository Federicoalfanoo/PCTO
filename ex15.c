#include <stdio.h>
void saluto()

{
    printf("beppolo\n"); 
}

void somma( int a, int b)
{
    printf("%d\n", a + b);
}
int main()
{
    int num1;
    int num2;
    int somma;
    int risultato;

    printf("Inserisci due numeri e ti restituirô la somma\n");
    scanf("%d%d", &num1, &num2);

    risultato = somma(num1, num2);
    printf("%d\n", risultato);
}
int main()
{
    int main()
{
    int num1;
    int num2;
    int somma;
    int risultato;

    printf("Inserisci due numeri e ti restituirô la differenza\n");
    scanf("%d%d", &num1, &num2);

    risultato = differenza(num1, num2);
    printf("%d\n", risultato);
}

}