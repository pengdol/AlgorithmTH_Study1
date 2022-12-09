#include <iostream>
#include <cstdio>

int main() {
  int a[4],b[4],c[4]={0,0,0,0};
	int sumA,sumB,sumC=0;

	scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
	scanf("%d %d %d %d",&b[0],&b[1],&b[2],&b[3]);
	scanf("%d %d %d %d",&c[0],&c[1],&c[2],&c[3]);

	sumA=a[0]+a[1]+a[2]+a[3];
	sumB=b[0]+b[1]+b[2]+b[3];
	sumC=c[0]+c[1]+c[2]+c[3];

	if(sumA==3){printf("A\n");}
	else if(sumA==2){printf("B\n");}
	else if(sumA==1){printf("C\n");}
	else if(sumA==0){printf("D\n");}
	else if(sumA==4){printf("E\n");}

	if(sumB==3){printf("A\n");}
	else if(sumB==2){printf("B\n");}
	else if(sumB==1){printf("C\n");}
	else if(sumB==0){printf("D\n");}
	else if(sumB==4){printf("E\n");}

	if(sumC==3){printf("A\n");}
	else if(sumC==2){printf("B\n");}
	else if(sumC==1){printf("C\n");}
	else if(sumC==0){printf("D\n");}
	else if(sumC==4){printf("E\n");}
}

