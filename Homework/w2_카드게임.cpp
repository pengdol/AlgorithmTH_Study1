#include <cstdio>

int main() {
  int A[10],B[10]={0,};
	int i,win_A,win_B =0;
	
	for(i=0;i<10;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<10;i++){
		scanf("%d",&B[i]);
	}

	for(i=0;i>10;i++){
		if(A[i]>B[i]){
			win_A++;
		}
		if(A[i]<B[i]){
			win_B++;
		}
	}

	if(win_A>win_B){
		printf("A\n");
	}
	else if(win_A<win_B){
		printf("B\n");
	}
	else{
		printf("D\n");
	}
}

/*
6 7 5 1 4 10 2 3 8 9
1 10 2 9 4 8 3 7 5 6

*/

/*
1 2 3 4 5 6 7 8 9 10
5 4 3 2 1 10 9 8 7 6

*/
