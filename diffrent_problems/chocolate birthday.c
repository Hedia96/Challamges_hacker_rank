
/*WORK :D*/
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Complete the birthday function below.
int main() { /*scan size array or choclate*/
  int size = 0;

  int x = 0;
  int i;
  int Array[100]; /*to check it sont null or dangling pointer*/
  int Mounth_length = 0;
  int Day_summation = 0;
  int result_count = 0;
  int Local_sum = 0;
  scanf("%d", &size);
  for (x = 0; x < size; x++) {
    scanf("%d", &Array[x]);
  }
  scanf("%d %d", &Day_summation, &Mounth_length);
  for (x = 0; x <= size - Mounth_length;x++) {
    Local_sum = 0;

    for (i = x; i < Mounth_length+x; i++) {
      Local_sum += Array[i];
    }
    if (Local_sum == Day_summation)
      result_count++;
  }
  // printf("%d\n %d\n %d\n", size, Day_summation, Mounth_length);
  printf("%d", result_count);
  return 0;
}
