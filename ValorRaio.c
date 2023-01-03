#include <stdio.h>

int main ()
{
    float altura, raio, volume;
    printf ("Digite o valor do altura: ",altura);
    scanf ("%f", &altura);
    printf ("Digite o valor do raio: ",raio);
    scanf ("%f", &raio);
    
    float pi = 3.1415;
    float area = pi*(raio*raio);
    volume = area*altura;
    
    
    printf ("O valor do volume: %f", volume);
    return 0;
}
