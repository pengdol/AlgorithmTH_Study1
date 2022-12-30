#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int n=0,s[1000]={0,};
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}

	int sum=0;
	for(int i=n-2;i>=0;i--){
		if (s[i+1]<=s[i]){
			int m=s[i]-s[i+1]+1;
			sum+=m;
			s[i]=s[i]-m;
		}
	}
	printf("%d",sum);
}

/*
3
5
5
5

4
5
3
7
5

*/
