#include <stdio.h>
#include <stdlib.h>

int main() {
  int test_cases;
  int *hash;
  int *keys;
  scanf("%d",&test_cases);
  int m, c;
  for (int i=0; i<test_cases; i++) {
    scanf(" %d %d",&m,&c);
    keys = malloc(c * sizeof (int));
    hash = malloc(c * sizeof (int));
    for (int j=0; j < c; j++) {
      scanf("%d",&keys[j]);
      hash[j] = keys[j] % m;
    }
    for (int j=0; j < m; j++) {
      printf("%d -> ",j);
      for (int k=0; k < c; k++) {
        if (hash[k] == j) {
          printf("%d -> ",keys[k]);
        }
      }
      printf("\\\n");
    }
    if (i < test_cases - 1) {
      printf("\n");
    }
  }
  return 0;
}