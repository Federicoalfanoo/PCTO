#include <stdio.h>

int main()
{
    char parola[25];
    int b = 0;
    scanf("%[^\n]s", parola);
   
 
    while(parola[b] != '\0')
    {
        if (parola[b]>= 97 && parola[b]<= 122)
        {
            parola[b]=parola[b] - 32;
            
        }
        
        else if (parola[b]>= 65 && parola[b]<=90)
        {
        parola[b]=parola[b] + 32;
        }
        b = b + 1;
       
    }
    printf("%s\n", parola);

}