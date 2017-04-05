int proverkaA(int a){
    if (a<1000)
    return 0;
    else return a;
    }
int proverkaB(int b){
    if (b<0 || b>365)
    return -1;
    else return b;
    }
double summa(int a, int b){
    double c;
    if (b>=0 && b<=30)
	c=a*0.9;
    if (b>=31 && b<=120)
	c=a*1.02;
    if (b>=121 && b<=240)
	c=a*1.06;
    if (b>=241 && b<=365)
	c=a*1.12;
    if (c==a)
	c=0;
    return c;
    }
