#include <iostream>
#include <cstdio>

int main() {
  int number[14]={0,};
	int yt=0;
	char gender='T';

	for(int i=0;i<14;i++){
		scanf("%1d",&number[i]);
	}

	if(number[7]>2){
		yt=20;
	}
	else{
		yt=19;
	}

	if(number[7]==2 || number[7]==4){
		gender='F';
	}
	else{
		gender='M';
	}

	printf("%d%d%d/%d%d/%d%d %c",yt,number[0],number[1],number[2],number[3],number[4],number[5],gender);
	
}
