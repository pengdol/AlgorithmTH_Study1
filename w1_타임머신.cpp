#include <iostream>
#include <stdlib.h>

int main() {
  int H, M, S;
  int NowTime = 0;
  int BackTime = 0;
  int T;

  scanf("%d %d %d", &H, &M, &S);
  scanf("%d", &T);

  NowTime += H * 3600;
  NowTime += M * 60;
  NowTime += S;

  BackTime = NowTime - T;

  printf("%d %d %d", BackTime / 3600, BackTime % 3600 / 60, BackTime % 3600 % 60);
}
