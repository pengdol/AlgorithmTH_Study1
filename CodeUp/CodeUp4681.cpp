#include <iostream>
#include <cstdio>

int main() {
  int num[5]={0,};
	int sum=0;

	for(int i=0;i<5;i++){
		scanf("%1d",&num[i]);
	}
	for(int i=0;i<5;i++){
		sum=sum+(num[i]*num[i]);
	}
	printf("%d",sum%10);
}
