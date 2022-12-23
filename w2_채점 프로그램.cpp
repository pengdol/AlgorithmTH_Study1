#include <cstdio>
#include <iostream>

int main() {
  int N, i, score = 0;
  scanf("%d", &N);

  int Ai[1000000], Bi[1000000];
  for (i = 0; i < N; i++) {
    scanf("%d", &Ai[i]);
  }
  for (i = 0; i < N; i++) {
    scanf("%d", &Bi[i]);
  }

  for (i = 0; i < N; i++) {
    if (Ai[i] == Bi[i]) {
      score++;
    }
  }

  printf("%d", score);
}

/*
10
5 1 3 2 4 1 4 2 2 1
1 1 3 2 5 4 4 1 3 1

*/
