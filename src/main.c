#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "deposit.h"

int main()
{
     do{
        int summa=0, srok=0;
        printf("Введите сумму вклада=");
        scanf("%d",&summa);    
        printf("Введите срок вклада=");
        scanf("%d",&srok);

        if((srok<=365)&&(summa>=1000)){
            printf("Сумма вклада: %f\n", calc(summa, chooseSrok(srok)));
            break;
        }
        else
            printf("Введите коректно данные\n");

        }while(1);   
}
