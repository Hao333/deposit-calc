int main(){
int a,b;
int a,b;
printf ("vvedite summu ne menee 1k;a=");
scanf("%d",&a);
printf ("\n");
	if (a<1000) {
	printf ("error summa menee 1k");
	return 0;
}
printf ("vvedite srok vklada ot 0 do 365;b=");
scanf("%d",&b);
printf ("\n");
	if (b<0 or b>365) {
	printf("error ne vernoe kolichestvo dney");
	return 0;
}	
    return 0
}
