#include <cstdio>

int main() {
  int n,k,count=0,ans=0;
	int i;

	scanf("%d %d",&n,&k);

	for (i=1;i<=n;i++){
		if(n%i==0){
			count+=1;
			if (count==k){
				ans=i;
				break;
			}
		}
	}

	printf("%d",ans);
}

/*
6 3

*/

/*
2735 1

*/

/*
25 4

*/
