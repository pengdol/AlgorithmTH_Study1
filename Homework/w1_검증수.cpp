#include <cstdio>

int main() {
  int a,b,c,d,e;
	int check;

	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	a=a*a;
	b=b*b;
	c=c*c;
	d=d*d;
	e=e*e;
	
	check=(a+b+c+d+e)%10;
	printf("%d\n",check);

  return 0;
}
