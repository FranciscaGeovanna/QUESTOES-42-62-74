#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "Portuguese_Brazil");
    
    int alunos, x;
    float notas, tn = 0, media;
    
    printf ("Programa para calcular média");
    
    printf ("\nInforme o número de alunos: ");
    scanf ("%d", &alunos);
    
    for (x = 1; x <= alunos; x++){
        printf ("\nInforme as notas dos alunos: ");
        scanf ("%f", &notas);
        
        tn = tn + notas; 
    }
       
        media = tn/alunos;

    printf ("Média: %.2f", media);
    
    return 0;
}

