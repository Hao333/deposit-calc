#include <stdio.h>
#include <stdlib.h>
int proverkaA(int a){
    if (a<1000)
    return 0;
    else return a;
    }
int proverkaB(int b){
    if (b<0 || b>365)
    return 0;
    else return b;
    
    }
double summa(int a, int b){
    if (b>=0 && b<=30)
	a=a*0.9;
    if (b>=31 && b<=120)
	a=a*1.02;
    if (b>=121 && b<=240)
	a=a*1.06;
    if (b>=241 && b<=365)
	a=a*1.12;
    return a;
    }

int main(){
int a,b;
    printf ("vvedite summu ne menee 1k;a=");
    scanf("%d",&a);
    a=proverkaA(a);
    printf ("\n vvedite srok vklada ot 0 do 365;b=");
    scanf("%d",&b);
    b=proverkaB(b);
    printf("\n summa v konce=%.0f",summa(a,b));
    return 0;
}
