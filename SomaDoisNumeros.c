#include <stdio.h>

int main()
{
    int numero1, numero2, numero3;
    printf("digite um numero 1: ",numero1);
    scanf("%d", &numero1);

    printf("digite um numero 2: ",numero2);
    scanf("%d", &numero2);
    
    printf("digite um numero 3: ",numero3);
    scanf("%d", &numero3);

    if (numero1 <= numero2+numero3){
        printf("O Primeiro é menor que a soma dos outros 2");
    }
    else{
        printf("o primeiro não é menor que a soma dos outros 2");
    }
    return 0;
}
