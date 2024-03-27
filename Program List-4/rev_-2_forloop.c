#include <stdio.h>
int main()
{
  int num, i;
  printf("Enter the upper value: ");
  scanf("%d", &num);
  printf("Natural Numbers with difference 2 ranging between %d to 1 are: \n", num);
  for (i = num; i >= 1; i-=2)
  {
    printf("%d ", i);
  }
  return 0;
} 