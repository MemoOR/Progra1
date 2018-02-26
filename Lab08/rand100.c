//Guillermo Ortega Romo

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0));

  int nums[10], max = 0;

  printf("Serie original: \n\t");
  for (int i = 0; i < 10; i++) {
    nums[i] = (rand() % 100) + 1;

    if (nums[i] > max)
      max = nums[i];

    printf("%d%s", nums[i], (i == 9) ? "\n" : ", ");
  }

  printf("\nEl número mayor es %d y los números mas pequeños a este son:\n", max);

  for (int i = 0; i < 10; i++)
    if (nums[i] < max)
      printf("\t%d\n", nums[i]);

  return 0;
}
