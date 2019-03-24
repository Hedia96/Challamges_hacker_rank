#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
int migratoryBirds(int n, int ar[]) {
  // Complete this function
  int f[5];
  for (int i = 1; i <= 5; i++) {
    int c = 0;
    for (int j = 0; j < n; j++) {
      if (ar[j] == i) {
        c++;
      }
      f[i - 1] = c;
    }
  }
  int max = f[0], loc = 0;
  for (int k = 1; k < 5; k++) {
    if (f[k] > max) {
      max = f[k];
      loc = k;
    }
  }
  return (loc + 1);
}

int main() {
  int n;
  int ar_i;
  scanf("%d",&n);
 //int ar[n]; should be dynamic allocation
 int* ar=(int *)malloc(n*sizeof(int));
  for (int ar_i = 0; ar_i < n; ar_i++) {
    scanf("%d",(ar+ar_i));
  }
  int result = migratoryBirds(n, ar);
  printf("%d",result);
  return 0;
}
