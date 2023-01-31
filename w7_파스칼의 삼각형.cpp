#include <iostream>
#include <cstdio>

int PASCAL(int n, int m){
	if (n==1 || m==1 || n==m){
		return 1;
	}
	return PASCAL(n-1,m)+PASCAL(n-1,m-1);
}

int main() {
  int n, m;
	scanf("%d %d",&n,&m);
	printf("%d",PASCAL(n,m));
}
