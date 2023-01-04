#include <stdio.h>

int main()
{
    float altura,resultado;
    int sexo;
    printf("Qual é seu sexo:\n");
    printf("Digite 1: Masculino\n");
    printf("Digite 2: Feminino\n");
    scanf("%d", &sexo);

    printf("Informe sua altura: ",altura);
    scanf("%f", &altura);

    if (sexo == 1){
        resultado = (72.7 * altura)-58;
        printf("O seu peso ideal é %.2f", resultado);
    }else if (sexo == 2){
        resultado = (62.1* altura)-44.7;
        printf("O seu peso ideal é %.2f", resultado);
    }else{
        printf("numero invalido");
    }

    return 0;
}
