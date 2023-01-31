#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char str[1001];
	cin.getline(str,sizeof(str),'\n');
	for(int i=0;i<1000;i++){
		if(str[i]=='\0'){
			continue;
		}
		else if(str[i]==' '){
			continue;
		}
		else if(65<=str[i] && str[i]<=90){
			str[i]=str[i]+32;
		}
	}

	printf("%s",str);
}
