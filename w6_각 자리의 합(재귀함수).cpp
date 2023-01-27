#include <iostream>
#include <cstdio>

int Sum(int n){
	if(n==0){
		return 0;
	}
 return n%10 + Sum(n/10);
}

int main(){
	int n;

	scanf("%d",&n);
	printf("%d",Sum(n));
}
