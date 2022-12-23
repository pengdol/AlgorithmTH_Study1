#include <iostream>
#include <cstdio>

int main() {
	int i,sum,average;
	int person;
	scanf("%d",&person);

	int score[person];
	for (i=0;i<person;i++){
		scanf("%d",&score[i]);
	}

	for (i=0;i<person;i++){
		sum=sum+score[i];
	}

	average=sum/person;

	if(average>=80){
		printf("hard");
	}
	else if(average>=60){
		printf("normal");
	}
	else{
		printf("easy");
	}
}
