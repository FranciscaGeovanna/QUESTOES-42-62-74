#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "Portuguese_Brazil");
    
    int cod, nasc, ingr, id, temp;
    
    printf ("Programa para verificar se um empregado está qualificado para aposentadoria\n");
    
    printf ("\nInforme o número do empregado (código): ");
    scanf ("%d", &cod);
    
    printf ("\nInforme o ano de nascimento: ");
    scanf ("%d", &nasc);
    
    printf ("\nInforme o ano de ingresso na empresa: ");
    scanf ("%d", &ingr);
    
    id = 2022 - nasc;
    
    printf ("\nIdade do empregado: %d", id);
    
    temp = 2022 - ingr;
    
    printf ("\nTempo de trabalho: %d\n", temp);
    
    if (id >= 65 || temp >= 30 || id >= 60 && temp >= 25){
        printf ("\n\t Requerer aposentadoria\n");
    } else {
        printf ("\n\t Não requerer\n");
    }

    return 0;
}

