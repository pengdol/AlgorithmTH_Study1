#include <iostream>
#include <cstdio>

int main() {
  int people,sum=0;
	int lastscore=0;
	int score;

	scanf("%d",&people);
	for (int i=0;i<people;i++){
		scanf("%d",&score);
		sum+=score;
	}

	lastscore=sum/people;
	printf("%d",lastscore);
}

/*
8
51 26 47 58 99 63 57 52

*/
