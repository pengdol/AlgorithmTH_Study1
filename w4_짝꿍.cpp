#include <cstdio>
#include <vector>
using namespace std;

int main() {
  vector<int> v[10001];
  int n, m;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < m; i++) {
    int from, to;
    scanf("%d %d", &from, &to);
    v[from].push_back(to);
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < v[i].size(); j++) {
      printf("%d ", v[i][j]);
    }
    if (v[i].size() == 0) {
      printf("0");
    }

    printf("\n");
  }
}

/*
5
10
1 2
1 3
2 4
1 5
5 1
4 3
3 2
1 4
3 4
4 1

*/
