#include<stdio.h>
int main ()
{

    int hora, min, seg;
    float aux = 5.5;

    printf("digite hora, minuto e segundo");
    scanf("%d %d %d", &hora, &min, &seg);


    if (hora>1 && min<15)
    {
        float a = ((hora*3600.0) + (min*60.) + seg);
        printf("quantidade de segundos: %f/n",a);
    }

    else
    {
        float b = ((hora*60.0) + min + (seg/(60.0)));
        printf("quantidade de minutos: %0.2f/n",b);
    }
    printf("horario: %0.2d: %0.2d: %0.2d\n", hora, min, seg);
    printf("float com duas casas: %.2f", aux);
    return 0;
}
