#include <iostream>
#include <cstdio>

int main() {
  int n;
	int bin[30] = {
        0,
    };
	
	scanf("%d",&n);

  int temp = n;
    int pos = 0;
    while (1)
    {
        bin[pos] = temp % 2;
        temp /= 2;
        pos++;
        if (temp == 0)
            break;
    }
    printf("2 ");
    for (int i = pos - 1; i >= 0; i--)
    {
        printf("%d", bin[i]);
    }
	printf("\n8 %o\n16 %X",n,n);
}
