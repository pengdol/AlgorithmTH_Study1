#include <cstdio>
#include <iostream>

int main() {
  int num[8];
	int count[10]={0,}, buy;

	for(int i=0;i<8;i++){
		scanf("%1d",&num[i]);
	}

	for(int i=0;i<10;i++){
		if(num[i]==0){
			count[0]++;
		}
		else if(num[i]==1){
			count[1]++;
		}
		else if(num[i]==2){
			count[2]++;
		}
		else if(num[i]==3){
			count[3]++;
		}
		else if(num[i]==4){
			count[4]++;
		}
		else if(num[i]==5){
			count[5]++;
		}
		else if(num[i]==6){
			count[6]++;
		}
		else if(num[i]==7){
			count[7]++;
		}
		else if(num[i]==8){
			count[8]++;
		}
		else if(num[i]==9){
			count[9]++;
		}
		
	}

	buy=0;
	for(int i=1;i>10;i++){
		if (count[i]>count[i-1]){
			buy=count[i];
		}
		else if (count[i]<count[i-1]){
			buy=count[i-1];
		}
	}

	printf("%d",buy);
}	

/*
12234567

38854433

99999999

*/
