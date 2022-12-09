#include <iostream>
#include <cstdio>

int main() {
  int n=0;
	int sum=0;
	int i, j=1;

	scanf("%d",&n);
	
	sum+=n%10+n/10%10;
	n=n/100;
	sum+=n%10+n/10%10;
	
	printf("%d",sum);
	
	return 0;
}
