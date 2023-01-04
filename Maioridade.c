#include <stdio.h>

int main()
{
    int idade;
    printf("Qual é a sua idade: ",idade);
    scanf("%d", &idade);
    
    if (idade >= 18){
        printf("Essa pessoa é maior de idade");
    }else{
        printf("Essa pessoa não é maior de idade");
    }

    return 0;
}
