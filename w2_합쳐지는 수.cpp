#include <cstdio>
#include <iostream>

int main() {
  long long N,sum,i=0;
	int hour,test,num[20],j,k=0;

	scanf("%lld",&N);
	for (j=0;N>=10;j++){
		for(i=10000000000000000000;test>=1;i/=10){
			if(N/i>=1){
				test=i;
			}
		}

		for(k=0;test<=1;k++){
			num[k]=N/test;
			test=test/10;
		}
		hour++;
	}
	printf("%d",hour);
}

/*
1234

*/
