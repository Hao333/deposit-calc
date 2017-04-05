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
