#include "deposit.h"

float calc(int summa, int srok)
{
    float out;
    switch (srok)
    {
        case 1: out = summa*0.9;break;
        case 2: out = summa*1.02;break;
        case 3: out = summa*1.06;break;
        case 4: out = summa*1.12;break;
    }
    return out;
}

int chooseSrok(int srok)
{
    if ((srok <= 30) && (srok >= 0))
         {
             srok = 1;
	 }
     if ((srok <= 120) && (srok >= 31))
         {
             srok = 2;
	 }
     if ((srok <= 240) && (srok >= 121))
	 {
             srok = 3;
	 }
     if ((srok <= 365) && (srok >= 241))
         {
             srok = 4;
	 }
     return srok;
}
