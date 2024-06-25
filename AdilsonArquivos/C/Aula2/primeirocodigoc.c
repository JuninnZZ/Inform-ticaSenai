#include <stdio.h>

int main () {
    
    int idade, i = 0;
    
    printf ("Qual sua idade?");
    scanf ("%i", &idade);
    
    if (idade >= 18)
    {
        printf ("Voce eh maior de idade \n");
    }
    else 
    {
        printf ("Voce eh menor de idade \n");
    }
    
    for (i=1; i<=10; i++)
    {
        printf ("%i \n",i);
    }
    return 0;
}