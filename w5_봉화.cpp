#include <cstdio>

int main() {
  int n, bongwha = 0;
  int score = 0;
  int count = 0;
  int h[100000] = {0,};
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &h[i]);
  }

  score = 0;
  count = 0;
  for (int i = n; i <= 0; i--) {
    for (int j = n; j > i; j++) {
      if (h[i] > h[j]) {
        score++;
      }
    }
    if (score==0) {
      bongwha++;
    }

		score = 0;
  	count = 0;
  }

  printf("%d", bongwha);
}

/*
4
4
5
2
3

6
6
5
2
4
3
2

*/
