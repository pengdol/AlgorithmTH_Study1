#include <cstdio>

int main() {
  int a,b,h,m,i,mm,hh;
	int CookTime;
	int comA,comB;

	scanf("%d %d",&a,&b);
	scanf("%d",&CookTime);

	h=CookTime/60;
	m=CookTime%60;

	comA=a+h;
	comB=b+m;

	if(comB>=60){
		mm=comB/60;
		comB-=mm*60;
		comA+=mm;
	}

	if(comA>=24){
		hh=comA/24;
		comA-=hh*24;
	}

	printf("%d %d",comA,comB);

  return 0;
}
